
// Generated from CINT.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CINTParser : public antlr4::Parser {
public:
  enum {
    INT = 1, IF = 2, WHILE = 3, ELSE = 4, ASSERT = 5, TERMINATOR = 6, OPENP = 7, 
    CLOSEP = 8, OPENC = 9, CLOSEC = 10, MULT = 11, MINUS = 12, PLUS = 13, 
    LT = 14, LEQ = 15, EQ = 16, NEQ = 17, GEQ = 18, GT = 19, ASSIGN = 20, 
    NONDETNAME = 21, OR = 22, AND = 23, NOT = 24, TRUE = 25, FALSE = 26, 
    TYPEDEF = 27, ENUM = 28, COMMA = 29, BOOL = 30, EXTERN = 31, VOID = 32, 
    MAIN = 33, RETURN = 34, ZERO = 35, POS = 36, V = 37, W = 38, BLOCKCOMMENT = 39, 
    LINECOMMENT = 40
  };

  enum {
    RuleNondet = 0, RuleAssert_stmt = 1, RuleNum_expr = 2, RuleBool_expr = 3, 
    RuleLit = 4, RuleRelop = 5, RuleLoop = 6, RuleCondition = 7, RuleThen = 8, 
    RuleElse = 9, RuleAssignment = 10, RuleInstruction = 11, RuleDeclaration = 12, 
    RuleDeclarations = 13, RuleInstructions = 14, RulePre = 15, RulePost = 16, 
    RuleMain = 17
  };

  explicit CINTParser(antlr4::TokenStream *input);

  CINTParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CINTParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class NondetContext;
  class Assert_stmtContext;
  class Num_exprContext;
  class Bool_exprContext;
  class LitContext;
  class RelopContext;
  class LoopContext;
  class ConditionContext;
  class ThenContext;
  class ElseContext;
  class AssignmentContext;
  class InstructionContext;
  class DeclarationContext;
  class DeclarationsContext;
  class InstructionsContext;
  class PreContext;
  class PostContext;
  class MainContext; 

  class  NondetContext : public antlr4::ParserRuleContext {
  public:
    NondetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONDETNAME();
    antlr4::tree::TerminalNode *OPENP();
    antlr4::tree::TerminalNode *CLOSEP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NondetContext* nondet();

  class  Assert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *OPENP();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *CLOSEP();
    antlr4::tree::TerminalNode *TERMINATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assert_stmtContext* assert_stmt();

  class  Num_exprContext : public antlr4::ParserRuleContext {
  public:
    Num_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENP();
    std::vector<Num_exprContext *> num_expr();
    Num_exprContext* num_expr(size_t i);
    antlr4::tree::TerminalNode *CLOSEP();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *V();
    antlr4::tree::TerminalNode *ZERO();
    antlr4::tree::TerminalNode *POS();
    NondetContext *nondet();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Num_exprContext* num_expr();
  Num_exprContext* num_expr(int precedence);
  class  Bool_exprContext : public antlr4::ParserRuleContext {
  public:
    Bool_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENP();
    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    antlr4::tree::TerminalNode *CLOSEP();
    antlr4::tree::TerminalNode *NOT();
    LitContext *lit();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_exprContext* bool_expr();
  Bool_exprContext* bool_expr(int precedence);
  class  LitContext : public antlr4::ParserRuleContext {
  public:
    LitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Num_exprContext *> num_expr();
    Num_exprContext* num_expr(size_t i);
    RelopContext *relop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LitContext* lit();

  class  RelopContext : public antlr4::ParserRuleContext {
  public:
    RelopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *NEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelopContext* relop();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPENP();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *CLOSEP();
    antlr4::tree::TerminalNode *OPENC();
    antlr4::tree::TerminalNode *CLOSEC();
    InstructionsContext *instructions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopContext* loop();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPENP();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *CLOSEP();
    std::vector<antlr4::tree::TerminalNode *> OPENC();
    antlr4::tree::TerminalNode* OPENC(size_t i);
    ThenContext *then();
    std::vector<antlr4::tree::TerminalNode *> CLOSEC();
    antlr4::tree::TerminalNode* CLOSEC(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ElseContext *else_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ThenContext : public antlr4::ParserRuleContext {
  public:
    ThenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionsContext *instructions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenContext* then();

  class  ElseContext : public antlr4::ParserRuleContext {
  public:
    ElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionsContext *instructions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseContext* else_();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *V();
    antlr4::tree::TerminalNode *ASSIGN();
    Num_exprContext *num_expr();
    antlr4::tree::TerminalNode *TERMINATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopContext *loop();
    ConditionContext *condition();
    AssignmentContext *assignment();
    Assert_stmtContext *assert_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    std::vector<antlr4::tree::TerminalNode *> V();
    antlr4::tree::TerminalNode* V(size_t i);
    antlr4::tree::TerminalNode *TERMINATOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  InstructionsContext : public antlr4::ParserRuleContext {
  public:
    InstructionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionsContext* instructions();

  class  PreContext : public antlr4::ParserRuleContext {
  public:
    PreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> OPENC();
    antlr4::tree::TerminalNode* OPENC(size_t i);
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *CLOSEC();
    antlr4::tree::TerminalNode *BOOL();
    std::vector<antlr4::tree::TerminalNode *> TERMINATOR();
    antlr4::tree::TerminalNode* TERMINATOR(size_t i);
    antlr4::tree::TerminalNode *EXTERN();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *NONDETNAME();
    std::vector<antlr4::tree::TerminalNode *> OPENP();
    antlr4::tree::TerminalNode* OPENP(size_t i);
    antlr4::tree::TerminalNode *VOID();
    std::vector<antlr4::tree::TerminalNode *> CLOSEP();
    antlr4::tree::TerminalNode* CLOSEP(size_t i);
    antlr4::tree::TerminalNode *MAIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreContext* pre();

  class  PostContext : public antlr4::ParserRuleContext {
  public:
    PostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *ZERO();
    antlr4::tree::TerminalNode *TERMINATOR();
    antlr4::tree::TerminalNode *CLOSEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostContext* post();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreContext *pre();
    PostContext *post();
    DeclarationsContext *declarations();
    InstructionsContext *instructions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool num_exprSempred(Num_exprContext *_localctx, size_t predicateIndex);
  bool bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

