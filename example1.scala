import chisel3._
import circt.stage.ChiselStage

// 计数器模块，当32位计数器计满时输出一个高电平
class Counter extends Module {
  val full = IO(Output(Bool()))

  val counter = RegInit(0.U(32.W))

  // full是组合逻辑
  full := (counter === "hFFFFFFFF".U)

  // counter是时序逻辑
  when(counter === "hFFFFFFFF".U) {
    counter := 0.U
  }.otherwise {
    counter := counter + 1.U
  }
}

class Flip extends Module {
  val in = IO(Input(Bool()))
  val out = IO(Output(Bool()))

  val reg = RegInit(false.B)

  out := reg

  when(in) {
    reg := ~reg
  }
}

// LED 模块，从计数器获得满计数信号来驱动 LED
class LedBlink extends Module {
  val out = IO(Output(Bool()))

  val counterInst = Module(new Counter)
  val flipInst = Module(new Flip)
  flipInst.in := counterInst.full

  out := flipInst.out
}

class LedBlinkTb extends Module {
  val dut = Module(new LedBlink)
  val out = dut.out

  // 自动化测试逻辑
  val (cycleCount, _) = util.Counter(true.B, 1000)
  when(cycleCount === 0.U) {
    printf("Start LED Blink Test\n") // 自动插入仿真打印
  }

  // 覆盖率收集（需配合仿真工具）
  cover(out === true.B, "LED_ON_Coverage")
  cover(out === false.B, "LED_OFF_Coverage")
}

object LedBlinkMain extends App {
  import java.nio.file.{Paths, Files}
  import java.nio.charset.StandardCharsets

  val verilogStr = ChiselStage.emitSystemVerilog(
    gen = new LedBlink,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )
  Files.write(
    Paths.get("LedBlink.sv"),
    verilogStr.getBytes(StandardCharsets.UTF_8)
  )

  val tbVerilogStr = ChiselStage.emitSystemVerilog(
    gen = new LedBlinkTb,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )
  Files.write(
    Paths.get("LedBlinkTb.sv"),
    tbVerilogStr.getBytes(StandardCharsets.UTF_8)
  )
}
