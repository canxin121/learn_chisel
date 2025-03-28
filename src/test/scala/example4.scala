package example4

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec // 使用 ScalaTest 作为测试运行器
import scala.util.Random // 用于生成随机数
import example2.SimpleAdder

class SimpleAdderSpec extends AnyFlatSpec with ChiselScalatestTester {

  // 可以配置测试参数
  val testWidth = 8 // 测试的加法器位宽
  val numTestCycles = 1000 // 运行多少个随机测试向量

  // 定义测试行为
  behavior of s"SimpleAdder (width=$testWidth)" // ScalaTest 的描述性语法

  // 定义一个测试用例
  it should "correctly add random numbers with carry" in {
    // 'test' 会实例化 DUT 并提供一个与 DUT 交互的接口 'c'
    test(new SimpleAdder(testWidth)) { c =>
      println(
        s"Starting Fuzz Test for SimpleAdder (width=$testWidth) with $numTestCycles cycles..."
      )

      // 创建一个随机数生成器
      val rng = new Random

      // 循环执行随机测试
      for (i <- 0 until numTestCycles) {
        // 1. 生成随机输入 (BigInt 类型，因为 Chisel 的 UInt 基于 BigInt)
        //    确保生成的数在 [0, 2^width - 1] 范围内
        val maxVal = (BigInt(1) << testWidth) - 1
        val randomA = BigInt(testWidth, rng) // 生成一个 testWidth 位的随机 BigInt
        val randomB = BigInt(testWidth, rng) // 生成另一个

        // 确保它们是非负的 (虽然 BigInt(width, rng) 通常是)
        assert(randomA >= 0 && randomA <= maxVal)
        assert(randomB >= 0 && randomB <= maxVal)

        // 2. 将随机输入驱动到 DUT 的端口 (使用 poke)
        c.io.a.poke(randomA.U) // .U 将 BigInt 转换为 Chisel 的 UInt Literal
        c.io.b.poke(randomB.U)

        // (可选) 如果是时序逻辑，需要推进时钟，但对于纯组合逻辑，poke 后立即可以读输出
        // c.clock.step(1) // 对于这个纯组合逻辑的加法器不是必需的，但加上也无妨

        // 3. 计算期望的输出 (参考模型/Golden Model)
        //    在 Scala 中使用 BigInt 进行精确计算
        val expectedFullSum = randomA + randomB // BigInt 的加法不会溢出 (在合理范围内)
        val expectedSum = expectedFullSum & maxVal // 取低 width 位 (位与操作)
        val expectedCarry =
          (expectedFullSum >> testWidth) & 1 // 右移 width 位取最低位，即原始的第 width 位

        // 4. 检查 DUT 的输出是否与期望值匹配 (使用 expect)
        //    'expect' 会在不匹配时自动报告错误并失败测试
        c.io.sum.expect(expectedSum.U)
        c.io.carry.expect(
          expectedCarry.B
        ) // .B 将 BigInt (0或1) 或 Boolean 转为 Bool Literal

        // (可选) 打印一些信息用于调试
        if (i % 100 == 0 || numTestCycles < 100) { // 每100次或总次数少时打印
          println(
            f"Cycle $i: a=0x${randomA}%X, b=0x${randomB}%X => DUT(sum=0x${c.io.sum
                .peek()
                .litValue}%X, carry=${c.io.carry.peek().litValue}), Expected(sum=0x${expectedSum}%X, carry=${expectedCarry})"
          )
        }
      }
      println(s"Fuzz Test completed successfully for $numTestCycles cycles.")
    }
  }
}
