package example5
import chisel3._
import chisel3.util._

class ComplexMuxModule extends Module {
  val io = IO(new Bundle {
    val a = Input(Bool())
    val b = Input(Bool())
    val c = Input(UInt(4.W))
    val d = Input(UInt(4.W))
    val out = Output(UInt(4.W))
  })

  // 复杂 Mux 条件示例：
  // 条件1: (a & b) | (c === 0.U)
  // 条件2: (c + d) > 10.U
  io.out := Mux(
    (io.a & io.b) | (io.c === 0.U), // 复合条件1
    Mux(
      (io.c + io.d) > 10.U, // 复合条件2
      100.U,
      200.U
    ),
    300.U
  )
}
