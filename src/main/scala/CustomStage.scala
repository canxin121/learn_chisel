package circt.stage

import circt.stage.CLI
import circt.stage.ChiselStage
import firrtl.options.PhaseManager
import chisel3.RawModule
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.CIRCTTargetAnnotation
import circt.stage.CIRCTTarget
import chisel3.ElaboratedCircuit
import chisel3.stage.ChiselCircuitAnnotation
import firrtl.options.Unserializable
import firrtl.options.CustomFileEmission
import firrtl.AnnotationSeq
import firrtl.stage.FirrtlCircuitAnnotation
import circt.stage.FirtoolOption
import circt.stage.EmittedMLIR
import firrtl.EmittedVerilogCircuitAnnotation
import firrtl.options.Dependency

class CustomStage extends ChiselStage {

  override val shell = new firrtl.options.Shell("Custom") with CLI {
    // These are added by firrtl.options.Shell (which we must extend because we are a Stage)
    override protected def includeLoggerOptions = false
  }

  override def run(annotations: firrtl.AnnotationSeq): firrtl.AnnotationSeq = {

    val pm = new firrtl.options.PhaseManager(
      targets = Seq(
        Dependency[chisel3.stage.phases.AddImplicitOutputFile],
        Dependency[chisel3.stage.phases.AddImplicitOutputAnnotationFile],
        Dependency[chisel3.stage.phases.MaybeAspectPhase],
        Dependency[chisel3.stage.phases.AddSerializationAnnotations],
        Dependency[chisel3.stage.phases.Convert],
        Dependency[chisel3.stage.phases.AddDedupGroupAnnotations],
        Dependency[chisel3.stage.phases.MaybeInjectingPhase],
        Dependency[circt.stage.phases.AddImplicitOutputFile],
        Dependency[circt.stage.phases.CIRCT]
      ),
      currentState = Seq(
        Dependency[firrtl.stage.phases.AddDefaults],
        Dependency[firrtl.stage.phases.Checks]
      )
    )
    pm.transform(annotations)
  }

}

object CustomStage {

  /** A phase shared by all the CIRCT backends */
  private def phase = new PhaseManager(
    Seq(
      Dependency[chisel3.aop.injecting.InjectingPhase],
      Dependency[chisel3.stage.phases.Elaborate],
      Dependency[chisel3.stage.phases.Convert],
      Dependency[example4.CustomTransform],
      Dependency[circt.stage.phases.AddImplicitOutputFile],
      Dependency[chisel3.stage.phases.AddImplicitOutputAnnotationFile],
      Dependency[circt.stage.phases.Checks],
      Dependency[circt.stage.phases.CIRCT]
    )
  )

  /** Elaborate a Chisel circuit into a CHIRRTL string */
  def emitCHIRRTL(
      gen: => RawModule,
      args: Array[String] = Array.empty
  ): String = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.CHIRRTL)
    ) ++ (new Shell("circt")).parse(args)

    val resultAnnos = phase.transform(annos)
    var elaboratedCircuit: Option[ElaboratedCircuit] = None
    val inFileAnnos = resultAnnos.flatMap {
      case a: ChiselCircuitAnnotation =>
        elaboratedCircuit = Some(a.elaboratedCircuit)
        None
      case _: Unserializable     => None
      case _: CustomFileEmission => None
      case a                     => Some(a)
    }
    elaboratedCircuit.get.serialize(inFileAnnos)
  }

  /** Elaborates a Chisel circuit and emits it to a file
    *
    * @param gen
    *   a call-by-name Chisel module
    * @param args
    *   additional command line arguments to pass to Chisel
    */
  def emitCHIRRTLFile(
      gen: => RawModule,
      args: Array[String] = Array.empty
  ): AnnotationSeq = {
    (new circt.stage.ChiselStage).execute(
      Array("--target", "chirrtl") ++ args,
      Seq(ChiselGeneratorAnnotation(() => gen))
    )
  }

  /** Return a CHIRRTL circuit for a Chisel module
    *
    * @param gen
    *   a call-by-name Chisel module
    */
  def convert(
      gen: => RawModule,
      args: Array[String] = Array.empty
  ): firrtl.ir.Circuit = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.CHIRRTL)
    ) ++ (new Shell("circt")).parse(args)

    phase
      .transform(annos)
      .collectFirst { case FirrtlCircuitAnnotation(a) =>
        a
      }
      .get
  }

  /** Compile a Chisel circuit to FIRRTL dialect */
  def emitFIRRTLDialect(
      gen: => RawModule,
      args: Array[String] = Array.empty,
      firtoolOpts: Array[String] = Array.empty
  ): String = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.FIRRTL)
    ) ++ (new Shell("circt")).parse(args) ++ firtoolOpts.map(FirtoolOption(_))

    phase
      .transform(annos)
      .collectFirst { case EmittedMLIR(_, a, _) =>
        a
      }
      .get
  }

  /** Compile a Chisel circuit to HWS dialect */
  def emitHWDialect(
      gen: => RawModule,
      args: Array[String] = Array.empty,
      firtoolOpts: Array[String] = Array.empty
  ): String = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.HW)
    ) ++ (new Shell("circt")).parse(args) ++ firtoolOpts.map(FirtoolOption(_))

    phase
      .transform(annos)
      .collectFirst { case EmittedMLIR(_, a, _) =>
        a
      }
      .get
  }

  /** Compile a Chisel circuit to SystemVerilog
    *
    * @param gen
    *   a call-by-name Chisel module
    * @param args
    *   additional command line arguments to pass to Chisel
    * @param firtoolOpts
    *   additional [[circt.stage.FirtoolOption]] to pass to firtool
    * @return
    *   a string containing the Verilog output
    */
  def emitSystemVerilog(
      gen: => RawModule,
      args: Array[String] = Array.empty,
      firtoolOpts: Array[String] = Array.empty
  ): String = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.SystemVerilog)
    ) ++ (new Shell("circt")).parse(args) ++ firtoolOpts.map(FirtoolOption(_))
    phase
      .transform(annos)
      .collectFirst { case EmittedVerilogCircuitAnnotation(a) =>
        a
      }
      .get
      .value
  }

  /** Compile a Chisel circuit to SystemVerilog with file output
    *
    * @param gen
    *   a call-by-name Chisel module
    * @param args
    *   additional command line arguments to pass to Chisel
    * @param firtoolOpts
    *   additional command line options to pass to firtool
    * @return
    *   a string containing the Verilog output
    */
  def emitSystemVerilogFile(
      gen: => RawModule,
      args: Array[String] = Array.empty,
      firtoolOpts: Array[String] = Array.empty
  ): AnnotationSeq =
    (new circt.stage.ChiselStage).execute(
      Array("--target", "systemverilog") ++ args,
      Seq(ChiselGeneratorAnnotation(() => gen)) ++ firtoolOpts.map(
        FirtoolOption(_)
      )
    )
}
