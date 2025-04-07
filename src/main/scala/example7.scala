package mux_transformer
import firrtl.ir._

object MuxTransformer {

  /** Applies a transformation function to all Mux expressions within a Circuit.
    *
    * @param circuit
    *   The input Circuit.
    * @param f
    *   The transformation function (Mux => Mux).
    * @return
    *   A new Circuit with Mux expressions transformed by f.
    */
  def transformCircuit(circuit: Circuit, f: Mux => Mux): Circuit = {
    circuit.copy(modules = circuit.modules.map(transformModule(_, f)))
  }

  // Helper function to transform a single module
  private def transformModule(module: DefModule, f: Mux => Mux): DefModule = {
    module match {
      // Only Modules have bodies with statements to transform
      case m: Module => m.copy(body = transformStatement(m.body, f))
      // ExtModule, IntModule, DefClass don't have bodies in the same way,
      // assuming Mux won't appear directly within their definitions
      // (though ports might have complex types, Mux is an Expression).
      case other: DefModule => other // Return unchanged
    }
  }

  // Helper function to transform a statement
  // This needs to recursively call transformExpression or transformStatement
  // on its components.
  private def transformStatement(stmt: Statement, f: Mux => Mux): Statement = {
    stmt match {
      // Statements containing Expressions
      case s @ DefNode(info, name, value) =>
        s.copy(value = transformExpression(value, f))
      case s @ DefWire(info, name, tpe) => s // No expressions
      case s @ DefRegister(info, name, tpe, clock) =>
        s.copy(clock = transformExpression(clock, f))
      case s @ DefRegisterWithReset(info, name, tpe, clock, reset, init) =>
        s.copy(
          clock = transformExpression(clock, f),
          reset = transformExpression(reset, f),
          init = transformExpression(init, f)
        )
      case s: DefInstance       => s // No expressions directly in the statement
      case s: DefInstanceChoice => s // No expressions directly in the statement
      case s: DefObject         => s // No expressions directly in the statement
      case s: DefMemory         => s // No expressions directly in the statement
      case s: DefTypeAlias      => s // No expressions directly in the statement
      case s @ Connect(info, loc, expr) =>
        s.copy(
          loc = transformExpression(loc, f),
          expr = transformExpression(expr, f)
        )
      case s @ PropAssign(info, loc, expr) =>
        s.copy(
          loc = transformExpression(loc, f),
          expr = transformExpression(expr, f)
        )
      case s @ IsInvalid(info, expr) =>
        s.copy(expr = transformExpression(expr, f))
      case s @ Conditionally(info, pred, conseq, alt) =>
        s.copy(
          pred = transformExpression(pred, f),
          conseq = transformStatement(conseq, f),
          alt = transformStatement(alt, f)
        )
      case s @ Block(stmts) =>
        s.copy(stmts = stmts.map(transformStatement(_, f)))
      case s @ Stop(info, ret, clk, en) =>
        s.copy(
          clk = transformExpression(clk, f),
          en = transformExpression(en, f)
        )
      case s @ Print(info, string, args, clk, en) =>
        s.copy(
          args = args.map(transformExpression(_, f)),
          clk = transformExpression(clk, f),
          en = transformExpression(en, f)
        )
      case s @ Verification(op, info, clk, pred, en, msg) =>
        s.copy(
          clk = transformExpression(clk, f),
          pred = transformExpression(pred, f),
          en = transformExpression(en, f)
        )
      case s @ Attach(info, exprs) =>
        s.copy(exprs = exprs.map(transformExpression(_, f)))
      case s @ ProbeDefine(info, sink, probeExpr) =>
        s.copy(
          sink = transformExpression(sink, f),
          probeExpr = transformExpression(probeExpr, f)
        )
      case s @ ProbeForceInitial(info, probe, value) =>
        s.copy(
          probe = transformExpression(probe, f),
          value = transformExpression(value, f)
        )
      case s @ ProbeReleaseInitial(info, probe) =>
        s.copy(probe = transformExpression(probe, f))
      case s @ ProbeForce(info, clock, cond, probe, value) =>
        s.copy(
          clock = transformExpression(clock, f),
          cond = transformExpression(cond, f),
          probe = transformExpression(probe, f),
          value = transformExpression(value, f)
        )
      case s @ ProbeRelease(info, clock, cond, probe) =>
        s.copy(
          clock = transformExpression(clock, f),
          cond = transformExpression(cond, f),
          probe = transformExpression(probe, f)
        )
      case s: LayerBlock =>
        s.copy(body =
          transformStatement(s.body, f)
        ) // Recurse into layer block body

      // Statements without relevant sub-expressions or sub-statements
      case s @ EmptyStmt => s
      // Potentially others depending on FIRRTL version/extensions...
    }
  }

  // Helper function to transform an expression
  // This is where the Mux transformation `f` is applied.
  private def transformExpression(
      expr: Expression,
      f: Mux => Mux
  ): Expression = {
    // Recursively transform sub-expressions first (post-order traversal)
    val exprPrime = expr match {
      case e @ Reference(name, tpe)          => e // Leaf node
      case e @ UIntLiteral(value, width)     => e // Leaf node
      case e @ SIntLiteral(value, width)     => e // Leaf node
      case e @ IntegerPropertyLiteral(value) => e
      case e @ DoublePropertyLiteral(value)  => e
      case e @ StringPropertyLiteral(value)  => e
      case e @ BooleanPropertyLiteral(value) => e
      case e @ PathPropertyLiteral(value)    => e

      case e @ SubField(expr, name, tpe) =>
        e.copy(expr = transformExpression(expr, f))
      case e @ SubIndex(expr, value, tpe) =>
        e.copy(expr = transformExpression(expr, f))
      case e @ SubAccess(expr, index, tpe) =>
        e.copy(
          expr = transformExpression(expr, f),
          index = transformExpression(index, f)
        )
      case e @ Mux(cond, tval, fval, tpe) =>
        // *** Key Part ***
        // 1. Recursively transform children
        val condPrime = transformExpression(cond, f)
        val tvalPrime = transformExpression(tval, f)
        val fvalPrime = transformExpression(fval, f)
        // 2. Construct the potentially modified Mux based on transformed children
        val muxPrime =
          e.copy(cond = condPrime, tval = tvalPrime, fval = fvalPrime)
        // 3. Apply the user-provided function `f` to this Mux
        f(muxPrime) // Apply the transformation function HERE
      case e @ ValidIf(cond, value, tpe) =>
        e.copy(
          cond = transformExpression(cond, f),
          value = transformExpression(value, f)
        )
      case e @ DoPrim(op, args, consts, tpe) =>
        e.copy(args = args.map(transformExpression(_, f)))
      case e @ PropExpr(info, tpe, op, args) =>
        e.copy(args = args.map(transformExpression(_, f)))
      case e @ ProbeExpr(expr, tpe) =>
        e.copy(expr = transformExpression(expr, f))
      case e @ RWProbeExpr(expr, tpe) =>
        e.copy(expr = transformExpression(expr, f))
      case e @ ProbeRead(expr, tpe) =>
        e.copy(expr = transformExpression(expr, f))
      case e @ SequencePropertyValue(tpe, values) =>
        e.copy(values = values.map(transformExpression(_, f)))
      // Potentially others depending on FIRRTL version/extensions...
    }
    // Ensure the result is an Expression (type safety)
    exprPrime match {
      case e: Expression => e
      case other         =>
        // Should not happen if f returns a Mux and recursion is correct
        throw new RuntimeException(
          s"Transformation resulted in non-Expression: $other"
        )
    }
  }
}
