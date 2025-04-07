package example1

import chisel3._
import circt.stage.ChiselStage

// 计数器模块，当32位计数器计满时输出一个高电平
class Counter(width: Int = 8) extends Module {
  val io = IO(new Bundle {
    val full = Output(Bool())
  })

  val counter = RegInit(0.U(width.W))
  // 根据width计算出计数器的最大值
  val maxVal = ((BigInt(1) << width) - 1).U(width.W)

  io.full := (counter === maxVal)

  when(counter === maxVal) {
    counter := 0.U
  }.otherwise {
    counter := counter + 1.U
  }
}

class Flip extends Module {
  val io = IO(new Bundle {
    val in = Input(Bool())
    val out = Output(Bool())
  })

  val reg = RegInit(false.B)

  io.out := reg

  when(io.in) {
    reg := ~reg
  }
}

// LED 模块，从计数器获得满计数信号来驱动 LED
class LedBlink extends Module {
  val io = IO(new Bundle {
    val out = Output(Bool())
  })

  val counterInst = Module(new Counter)
  val flipInst = Module(new Flip)
  flipInst.io.in := counterInst.io.full

  io.out := flipInst.io.out
}

object LedBlinkMain extends App {
  import java.nio.file.{Paths, Files}
  import java.nio.charset.StandardCharsets

  val verilogStr = ChiselStage.emitSystemVerilog(
    gen = new LedBlink,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  val firStr = ChiselStage.emitCHIRRTL(
    new LedBlink
  )

  Files.createDirectories(Paths.get("output/example1"))

  Files.write(
    Paths.get("output/example1/LedBlink.sv"),
    verilogStr.getBytes(StandardCharsets.UTF_8)
  )

  Files.write(
    Paths.get("output/example1/LedBlink.fir"),
    firStr.getBytes(StandardCharsets.UTF_8)
  )
  println(
    "LedBlink module has been generated in 'output/example1/LedBlink.sv'"
  )
}
