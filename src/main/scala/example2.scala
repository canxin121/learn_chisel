package example2

import chisel3._
import _root_.circt.stage.ChiselStage

class SimpleAdder(width: Int = 8) extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(width.W))
    val b = Input(UInt(width.W))
    val sum = Output(UInt((width).W))
    val carry = Output(Bool())
  })

  val sum = io.a +& io.b
  io.sum := sum
  io.carry := sum(width)
}

object AdderMain extends App {
  import java.nio.file.{Paths, Files}
  import java.nio.charset.StandardCharsets

  val verilogStr = ChiselStage.emitSystemVerilog(
    gen = new SimpleAdder,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  Files.createDirectories(Paths.get("output/example2"))

  Files.write(
    Paths.get("output/example2/SimpleAdder.sv"),
    verilogStr.getBytes(StandardCharsets.UTF_8)
  )

  println(
    "SimpleAdder module has been generated in 'output/example2/SimpleAdder.sv'"
  )
}
