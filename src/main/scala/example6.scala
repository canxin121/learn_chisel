package example6
import chisel3._
import chisel3.util._
import _root_.circt.stage.CustomStage

// 最底层模块：输入值 +1
class Module3 extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })
  io.out := io.in + 1.U
}

// 中间模块：调用 Module3 后再 +1
class Module2 extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })
  val m3 = Module(new Module3)
  m3.io.in := io.in
  io.out := m3.io.out + 1.U  // 总效果：输入 +2
}

// 顶层模块：同时调用 Module2 和 Module3
class Module1 extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })
  
  // 实例化 Module2 和 Module3
  val m2 = Module(new Module2)
  val m3 = Module(new Module3)
  
  // 连接输入信号
  m2.io.in := io.in
  m3.io.in := io.in
  
  // 组合输出：Module2的输出（输入+2） + Module3的输出（输入+1） +1
  io.out := m2.io.out + m3.io.out + 1.U  // 总效果：输入*2 +4
}

// 生成 Verilog 代码
object Main extends App {
  CustomStage.emitSystemVerilog(new Module1)
}