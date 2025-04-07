FIRRTL version 3.3.0
circuit LedBlink :
  module Counter : @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 7:7]
    input clock : Clock @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 7:7]
    input reset : Reset @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 7:7]
    output io : { full : UInt<1>} @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 8:14]

    regreset counter : UInt<8>, clock, reset, UInt<8>(0h0) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 12:24]
    node _io_full_T = eq(counter, UInt<8>(0hff)) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 16:23]
    connect io.full, _io_full_T @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 16:11]
    node _T = eq(counter, UInt<8>(0hff)) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 18:16]
    when _T : @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 18:28]
      connect counter, UInt<1>(0h0) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 19:13]
    else :
      node _counter_T = add(counter, UInt<1>(0h1)) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 21:24]
      node _counter_T_1 = tail(_counter_T, 1) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 21:24]
      connect counter, _counter_T_1 @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 21:13]


  module Flip : @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 25:7]
    input clock : Clock @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 25:7]
    input reset : Reset @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 25:7]
    output io : { flip in : UInt<1>, out : UInt<1>} @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 26:14]

    regreset reg : UInt<1>, clock, reset, UInt<1>(0h0) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 31:20]
    connect io.out, reg @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 33:10]
    when io.in : @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 35:15]
      node _reg_T = not(reg) @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 36:12]
      connect reg, _reg_T @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 36:9]


  module LedBlink : @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 41:7]
    input clock : Clock @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 41:7]
    input reset : UInt<1> @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 41:7]
    output io : { out : UInt<1>} @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 42:14]

    inst counterInst of Counter @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 46:27]
    connect counterInst.clock, clock
    connect counterInst.reset, reset
    inst flipInst of Flip @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 47:24]
    connect flipInst.clock, clock
    connect flipInst.reset, reset
    connect flipInst.io.in, counterInst.io.full @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 48:18]
    connect io.out, flipInst.io.out @[home/canxin/Documents/fpga/learn_chisel/src/main/scala/example1.scala 50:10]

