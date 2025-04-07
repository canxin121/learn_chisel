package example3

import chisel3._
import chisel3.util._
import _root_.circt.stage.CustomStage

/** 可调参数波形发生器
  *
  * @param bitWidth
  *   输出位宽(控制幅度分辨率)
  * @param phaseWidth
  *   相位累加器位宽(控制频率分辨率)
  */
class WaveformGenerator(bitWidth: Int = 8, phaseWidth: Int = 16)
    extends Module {
  // 将输出类型改为 SInt，以便保留负值
  val io = IO(new Bundle {
    val waveType = Input(UInt(2.W)) // 波形类型选择: 0-正弦,1-三角,2-锯齿,3-方波
    val freqCtrl = Input(UInt(phaseWidth.W)) // 频率控制字
    val phaseOffset = Input(UInt(phaseWidth.W)) // 相位偏移
    val output = Output(SInt(bitWidth.W)) // 波形输出，signed
  })

  // 定义幅度上下限
  val maxVal = (1 << (bitWidth - 1)) - 1 // 正数最大值
  val minVal = -(1 << (bitWidth - 1)) // 最小值

  // 相位累加器
  val phaseAcc = RegInit(0.U(phaseWidth.W))
  phaseAcc := phaseAcc + io.freqCtrl

  // 带相位偏移的相位值
  val phase = phaseAcc + io.phaseOffset

  // 预设默认输出
  io.output := 0.S

  // 正弦波查找表，直接输出 signed 范围 [-maxVal, maxVal]
  val sinTable = VecInit(Seq.tabulate(256) { i =>
    val rad = 2 * math.Pi * i / 256.0
    val sinValue = math.sin(rad)
    val scaled = (sinValue * maxVal).toInt
    scaled.S(bitWidth.W)
  })

  // 三角波查找表，范围为 [-maxVal, maxVal]
  val triTable = VecInit(Seq.tabulate(256) { i =>
    if (i < 128)
      // 从 -maxVal 线性上升至 maxVal
      (-maxVal + ((2 * maxVal * i) / 128)).S(bitWidth.W)
    else
      // 从 maxVal 线性下降至 -maxVal
      (maxVal - ((2 * maxVal * (i - 128)) / 128)).S(bitWidth.W)
  })

  // 锯齿波查找表，范围为 [-maxVal, maxVal]
  val sawTable = VecInit(Seq.tabulate(256) { i =>
    // i:0 -> -maxVal, i:255 -> maxVal
    (-maxVal + ((2 * maxVal * i) / 255)).S(bitWidth.W)
  })

  switch(io.waveType) {
    is(0.U) { // 正弦波
      io.output := sinTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(1.U) { // 三角波
      io.output := triTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(2.U) { // 锯齿波
      io.output := sawTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(3.U) { // 方波：半周期输出 maxVal, 另一半输出 -maxVal
      io.output := Mux(phase(phaseWidth - 1) === 1.U, (-maxVal).S, maxVal.S)
    }
  }
}

object WaveformGeneratorMain extends App {
  import java.nio.file.{Paths, Files}
  import java.nio.charset.StandardCharsets

  val verilogStr = CustomStage.emitSystemVerilog(
    gen = new WaveformGenerator(bitWidth = 16, phaseWidth = 16),
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  Files.createDirectories(Paths.get("output/example3"))

  Files.write(
    Paths.get("output/example3/WaveformGenerator.sv"),
    verilogStr.getBytes(StandardCharsets.UTF_8)
  )

  println(
    "WaveformGenerator module has been generated in 'output/example3/WaveformGenerator.sv'"
  )
}
