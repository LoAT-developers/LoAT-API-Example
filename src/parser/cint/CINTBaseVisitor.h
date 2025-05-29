
// Generated from CINT.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CINTVisitor.h"


/**
 * This class provides an empty implementation of CINTVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CINTBaseVisitor : public CINTVisitor {
public:

  virtual std::any visitNondet(CINTParser::NondetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssert_stmt(CINTParser::Assert_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNum_expr(CINTParser::Num_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool_expr(CINTParser::Bool_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLit(CINTParser::LitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelop(CINTParser::RelopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(CINTParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(CINTParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThen(CINTParser::ThenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse(CINTParser::ElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(CINTParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruction(CINTParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(CINTParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarations(CINTParser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstructions(CINTParser::InstructionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPre(CINTParser::PreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPost(CINTParser::PostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMain(CINTParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }


};

