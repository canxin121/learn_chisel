package example4

import circt.stage.CustomStage
import example5.ComplexMuxModule
import firrtl.ir._
import example3.WaveformGenerator
import example1.LedBlink

class CustomTransform extends firrtl.options.Phase {

  override def invalidates(a: firrtl.options.Phase) = false

  private def isRef(expr: Expression): Boolean = expr match {
    case ref @ (_: Reference | _: SubField | _: SubIndex) => true
    case _                                                => false
  }

  override def transform(
      annotations: firrtl.AnnotationSeq
  ): firrtl.AnnotationSeq = {

    val (Seq(circuitAnno: firrtl.stage.FirrtlCircuitAnnotation), otherAnnos) =
      annotations.partition {
        case _: firrtl.stage.FirrtlCircuitAnnotation => true
        case _                                       => false
      }
    val c = circuitAnno.circuit
    val c_serialized = c.serialize
    // 将c_serialized保存到文件中
    val file = new java.io.File("circuit_serialized.firrtl")
    val writer = new java.io.PrintWriter(file)
    writer.write(c_serialized)
    writer.close()

    // 传入Mux,传出Mux
    def transformMux(mux: Mux): Mux = {
      print(s"Transforming Mux: ${mux.serialize}\n")
      return mux
    }

    mux_transformer.MuxTransformer.transformCircuit(c, transformMux)

    firrtl.stage.FirrtlCircuitAnnotation(
      c
    ) +: otherAnnos
  }
}

object Example4Main extends App {
  val v = CustomStage.emitSystemVerilog(
    new ComplexMuxModule,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )
  println(v)
}
