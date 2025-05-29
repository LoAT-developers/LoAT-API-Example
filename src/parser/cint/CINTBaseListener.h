
// Generated from CINT.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CINTListener.h"


/**
 * This class provides an empty implementation of CINTListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CINTBaseListener : public CINTListener {
public:

  virtual void enterNondet(CINTParser::NondetContext * /*ctx*/) override { }
  virtual void exitNondet(CINTParser::NondetContext * /*ctx*/) override { }

  virtual void enterAssert_stmt(CINTParser::Assert_stmtContext * /*ctx*/) override { }
  virtual void exitAssert_stmt(CINTParser::Assert_stmtContext * /*ctx*/) override { }

  virtual void enterNum_expr(CINTParser::Num_exprContext * /*ctx*/) override { }
  virtual void exitNum_expr(CINTParser::Num_exprContext * /*ctx*/) override { }

  virtual void enterBool_expr(CINTParser::Bool_exprContext * /*ctx*/) override { }
  virtual void exitBool_expr(CINTParser::Bool_exprContext * /*ctx*/) override { }

  virtual void enterLit(CINTParser::LitContext * /*ctx*/) override { }
  virtual void exitLit(CINTParser::LitContext * /*ctx*/) override { }

  virtual void enterRelop(CINTParser::RelopContext * /*ctx*/) override { }
  virtual void exitRelop(CINTParser::RelopContext * /*ctx*/) override { }

  virtual void enterLoop(CINTParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(CINTParser::LoopContext * /*ctx*/) override { }

  virtual void enterCondition(CINTParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CINTParser::ConditionContext * /*ctx*/) override { }

  virtual void enterThen(CINTParser::ThenContext * /*ctx*/) override { }
  virtual void exitThen(CINTParser::ThenContext * /*ctx*/) override { }

  virtual void enterElse(CINTParser::ElseContext * /*ctx*/) override { }
  virtual void exitElse(CINTParser::ElseContext * /*ctx*/) override { }

  virtual void enterAssignment(CINTParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CINTParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterInstruction(CINTParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(CINTParser::InstructionContext * /*ctx*/) override { }

  virtual void enterDeclaration(CINTParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CINTParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarations(CINTParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(CINTParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterInstructions(CINTParser::InstructionsContext * /*ctx*/) override { }
  virtual void exitInstructions(CINTParser::InstructionsContext * /*ctx*/) override { }

  virtual void enterPre(CINTParser::PreContext * /*ctx*/) override { }
  virtual void exitPre(CINTParser::PreContext * /*ctx*/) override { }

  virtual void enterPost(CINTParser::PostContext * /*ctx*/) override { }
  virtual void exitPost(CINTParser::PostContext * /*ctx*/) override { }

  virtual void enterMain(CINTParser::MainContext * /*ctx*/) override { }
  virtual void exitMain(CINTParser::MainContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

