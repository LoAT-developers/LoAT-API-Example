
// Generated from CINT.g4 by ANTLR 4.11.1


#include "CINTListener.h"
#include "CINTVisitor.h"

#include "CINTParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CINTParserStaticData final {
  CINTParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CINTParserStaticData(const CINTParserStaticData&) = delete;
  CINTParserStaticData(CINTParserStaticData&&) = delete;
  CINTParserStaticData& operator=(const CINTParserStaticData&) = delete;
  CINTParserStaticData& operator=(CINTParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cintParserOnceFlag;
CINTParserStaticData *cintParserStaticData = nullptr;

void cintParserInitialize() {
  assert(cintParserStaticData == nullptr);
  auto staticData = std::make_unique<CINTParserStaticData>(
    std::vector<std::string>{
      "nondet", "assert_stmt", "num_expr", "bool_expr", "lit", "relop", 
      "loop", "condition", "then", "else", "assignment", "instruction", 
      "declaration", "declarations", "instructions", "pre", "post", "main"
    },
    std::vector<std::string>{
      "", "'int'", "'if'", "'while'", "'else'", "'assert'", "';'", "'('", 
      "')'", "'{'", "'}'", "'*'", "'-'", "'+'", "'<'", "'<='", "'=='", "'!='", 
      "'>='", "'>'", "'='", "'__VERIFIER_nondet_int'", "'||'", "'&&'", "'!'", 
      "'true'", "'false'", "'typedef'", "'enum'", "','", "'bool'", "'extern'", 
      "'void'", "'main'", "'return'", "'0'"
    },
    std::vector<std::string>{
      "", "INT", "IF", "WHILE", "ELSE", "ASSERT", "TERMINATOR", "OPENP", 
      "CLOSEP", "OPENC", "CLOSEC", "MULT", "MINUS", "PLUS", "LT", "LEQ", 
      "EQ", "NEQ", "GEQ", "GT", "ASSIGN", "NONDETNAME", "OR", "AND", "NOT", 
      "TRUE", "FALSE", "TYPEDEF", "ENUM", "COMMA", "BOOL", "EXTERN", "VOID", 
      "MAIN", "RETURN", "ZERO", "POS", "V", "W", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,201,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,58,8,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,69,8,2,10,2,12,2,72,9,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,3,3,84,8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,92,8,3,
  	10,3,12,3,95,9,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,
  	109,8,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,125,
  	8,7,1,8,3,8,128,8,8,1,9,3,9,131,8,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,3,11,142,8,11,1,12,1,12,1,12,1,12,5,12,148,8,12,10,12,12,12,
  	151,9,12,1,12,1,12,1,13,4,13,156,8,13,11,13,12,13,157,1,14,4,14,161,8,
  	14,11,14,12,14,162,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,16,1,17,1,17,3,17,194,8,17,1,17,3,17,197,8,17,1,17,1,17,1,
  	17,0,2,4,6,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,1,1,
  	0,14,19,208,0,36,1,0,0,0,2,40,1,0,0,0,4,57,1,0,0,0,6,83,1,0,0,0,8,96,
  	1,0,0,0,10,100,1,0,0,0,12,102,1,0,0,0,14,112,1,0,0,0,16,127,1,0,0,0,18,
  	130,1,0,0,0,20,132,1,0,0,0,22,141,1,0,0,0,24,143,1,0,0,0,26,155,1,0,0,
  	0,28,160,1,0,0,0,30,164,1,0,0,0,32,186,1,0,0,0,34,191,1,0,0,0,36,37,5,
  	21,0,0,37,38,5,7,0,0,38,39,5,8,0,0,39,1,1,0,0,0,40,41,5,5,0,0,41,42,5,
  	7,0,0,42,43,3,6,3,0,43,44,5,8,0,0,44,45,5,6,0,0,45,3,1,0,0,0,46,47,6,
  	2,-1,0,47,48,5,7,0,0,48,49,3,4,2,0,49,50,5,8,0,0,50,58,1,0,0,0,51,52,
  	5,12,0,0,52,58,3,4,2,8,53,58,5,37,0,0,54,58,5,35,0,0,55,58,5,36,0,0,56,
  	58,3,0,0,0,57,46,1,0,0,0,57,51,1,0,0,0,57,53,1,0,0,0,57,54,1,0,0,0,57,
  	55,1,0,0,0,57,56,1,0,0,0,58,70,1,0,0,0,59,60,10,7,0,0,60,61,5,11,0,0,
  	61,69,3,4,2,8,62,63,10,6,0,0,63,64,5,13,0,0,64,69,3,4,2,7,65,66,10,5,
  	0,0,66,67,5,12,0,0,67,69,3,4,2,6,68,59,1,0,0,0,68,62,1,0,0,0,68,65,1,
  	0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,5,1,0,0,0,72,70,1,
  	0,0,0,73,74,6,3,-1,0,74,75,5,7,0,0,75,76,3,6,3,0,76,77,5,8,0,0,77,84,
  	1,0,0,0,78,79,5,24,0,0,79,84,3,6,3,6,80,84,3,8,4,0,81,84,5,26,0,0,82,
  	84,5,25,0,0,83,73,1,0,0,0,83,78,1,0,0,0,83,80,1,0,0,0,83,81,1,0,0,0,83,
  	82,1,0,0,0,84,93,1,0,0,0,85,86,10,5,0,0,86,87,5,23,0,0,87,92,3,6,3,6,
  	88,89,10,4,0,0,89,90,5,22,0,0,90,92,3,6,3,5,91,85,1,0,0,0,91,88,1,0,0,
  	0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,7,1,0,0,0,95,93,1,0,0,
  	0,96,97,3,4,2,0,97,98,3,10,5,0,98,99,3,4,2,0,99,9,1,0,0,0,100,101,7,0,
  	0,0,101,11,1,0,0,0,102,103,5,3,0,0,103,104,5,7,0,0,104,105,3,6,3,0,105,
  	106,5,8,0,0,106,108,5,9,0,0,107,109,3,28,14,0,108,107,1,0,0,0,108,109,
  	1,0,0,0,109,110,1,0,0,0,110,111,5,10,0,0,111,13,1,0,0,0,112,113,5,2,0,
  	0,113,114,5,7,0,0,114,115,3,6,3,0,115,116,5,8,0,0,116,117,5,9,0,0,117,
  	118,3,16,8,0,118,124,5,10,0,0,119,120,5,4,0,0,120,121,5,9,0,0,121,122,
  	3,18,9,0,122,123,5,10,0,0,123,125,1,0,0,0,124,119,1,0,0,0,124,125,1,0,
  	0,0,125,15,1,0,0,0,126,128,3,28,14,0,127,126,1,0,0,0,127,128,1,0,0,0,
  	128,17,1,0,0,0,129,131,3,28,14,0,130,129,1,0,0,0,130,131,1,0,0,0,131,
  	19,1,0,0,0,132,133,5,37,0,0,133,134,5,20,0,0,134,135,3,4,2,0,135,136,
  	5,6,0,0,136,21,1,0,0,0,137,142,3,12,6,0,138,142,3,14,7,0,139,142,3,20,
  	10,0,140,142,3,2,1,0,141,137,1,0,0,0,141,138,1,0,0,0,141,139,1,0,0,0,
  	141,140,1,0,0,0,142,23,1,0,0,0,143,144,5,1,0,0,144,149,5,37,0,0,145,146,
  	5,29,0,0,146,148,5,37,0,0,147,145,1,0,0,0,148,151,1,0,0,0,149,147,1,0,
  	0,0,149,150,1,0,0,0,150,152,1,0,0,0,151,149,1,0,0,0,152,153,5,6,0,0,153,
  	25,1,0,0,0,154,156,3,24,12,0,155,154,1,0,0,0,156,157,1,0,0,0,157,155,
  	1,0,0,0,157,158,1,0,0,0,158,27,1,0,0,0,159,161,3,22,11,0,160,159,1,0,
  	0,0,161,162,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,29,1,0,0,0,164,
  	165,5,27,0,0,165,166,5,28,0,0,166,167,5,9,0,0,167,168,5,26,0,0,168,169,
  	5,29,0,0,169,170,5,25,0,0,170,171,5,10,0,0,171,172,5,30,0,0,172,173,5,
  	6,0,0,173,174,5,31,0,0,174,175,5,1,0,0,175,176,5,21,0,0,176,177,5,7,0,
  	0,177,178,5,32,0,0,178,179,5,8,0,0,179,180,5,6,0,0,180,181,5,1,0,0,181,
  	182,5,33,0,0,182,183,5,7,0,0,183,184,5,8,0,0,184,185,5,9,0,0,185,31,1,
  	0,0,0,186,187,5,34,0,0,187,188,5,35,0,0,188,189,5,6,0,0,189,190,5,10,
  	0,0,190,33,1,0,0,0,191,193,3,30,15,0,192,194,3,26,13,0,193,192,1,0,0,
  	0,193,194,1,0,0,0,194,196,1,0,0,0,195,197,3,28,14,0,196,195,1,0,0,0,196,
  	197,1,0,0,0,197,198,1,0,0,0,198,199,3,32,16,0,199,35,1,0,0,0,16,57,68,
  	70,83,91,93,108,124,127,130,141,149,157,162,193,196
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cintParserStaticData = staticData.release();
}

}

CINTParser::CINTParser(TokenStream *input) : CINTParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CINTParser::CINTParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CINTParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cintParserStaticData->atn, cintParserStaticData->decisionToDFA, cintParserStaticData->sharedContextCache, options);
}

CINTParser::~CINTParser() {
  delete _interpreter;
}

const atn::ATN& CINTParser::getATN() const {
  return *cintParserStaticData->atn;
}

std::string CINTParser::getGrammarFileName() const {
  return "CINT.g4";
}

const std::vector<std::string>& CINTParser::getRuleNames() const {
  return cintParserStaticData->ruleNames;
}

const dfa::Vocabulary& CINTParser::getVocabulary() const {
  return cintParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CINTParser::getSerializedATN() const {
  return cintParserStaticData->serializedATN;
}


//----------------- NondetContext ------------------------------------------------------------------

CINTParser::NondetContext::NondetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::NondetContext::NONDETNAME() {
  return getToken(CINTParser::NONDETNAME, 0);
}

tree::TerminalNode* CINTParser::NondetContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

tree::TerminalNode* CINTParser::NondetContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}


size_t CINTParser::NondetContext::getRuleIndex() const {
  return CINTParser::RuleNondet;
}

void CINTParser::NondetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNondet(this);
}

void CINTParser::NondetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNondet(this);
}


std::any CINTParser::NondetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitNondet(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::NondetContext* CINTParser::nondet() {
  NondetContext *_localctx = _tracker.createInstance<NondetContext>(_ctx, getState());
  enterRule(_localctx, 0, CINTParser::RuleNondet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(CINTParser::NONDETNAME);
    setState(37);
    match(CINTParser::OPENP);
    setState(38);
    match(CINTParser::CLOSEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assert_stmtContext ------------------------------------------------------------------

CINTParser::Assert_stmtContext::Assert_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::Assert_stmtContext::ASSERT() {
  return getToken(CINTParser::ASSERT, 0);
}

tree::TerminalNode* CINTParser::Assert_stmtContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

CINTParser::Bool_exprContext* CINTParser::Assert_stmtContext::bool_expr() {
  return getRuleContext<CINTParser::Bool_exprContext>(0);
}

tree::TerminalNode* CINTParser::Assert_stmtContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}

tree::TerminalNode* CINTParser::Assert_stmtContext::TERMINATOR() {
  return getToken(CINTParser::TERMINATOR, 0);
}


size_t CINTParser::Assert_stmtContext::getRuleIndex() const {
  return CINTParser::RuleAssert_stmt;
}

void CINTParser::Assert_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssert_stmt(this);
}

void CINTParser::Assert_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssert_stmt(this);
}


std::any CINTParser::Assert_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitAssert_stmt(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::Assert_stmtContext* CINTParser::assert_stmt() {
  Assert_stmtContext *_localctx = _tracker.createInstance<Assert_stmtContext>(_ctx, getState());
  enterRule(_localctx, 2, CINTParser::RuleAssert_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(CINTParser::ASSERT);
    setState(41);
    match(CINTParser::OPENP);
    setState(42);
    bool_expr(0);
    setState(43);
    match(CINTParser::CLOSEP);
    setState(44);
    match(CINTParser::TERMINATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Num_exprContext ------------------------------------------------------------------

CINTParser::Num_exprContext::Num_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::Num_exprContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

std::vector<CINTParser::Num_exprContext *> CINTParser::Num_exprContext::num_expr() {
  return getRuleContexts<CINTParser::Num_exprContext>();
}

CINTParser::Num_exprContext* CINTParser::Num_exprContext::num_expr(size_t i) {
  return getRuleContext<CINTParser::Num_exprContext>(i);
}

tree::TerminalNode* CINTParser::Num_exprContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}

tree::TerminalNode* CINTParser::Num_exprContext::MINUS() {
  return getToken(CINTParser::MINUS, 0);
}

tree::TerminalNode* CINTParser::Num_exprContext::V() {
  return getToken(CINTParser::V, 0);
}

tree::TerminalNode* CINTParser::Num_exprContext::ZERO() {
  return getToken(CINTParser::ZERO, 0);
}

tree::TerminalNode* CINTParser::Num_exprContext::POS() {
  return getToken(CINTParser::POS, 0);
}

CINTParser::NondetContext* CINTParser::Num_exprContext::nondet() {
  return getRuleContext<CINTParser::NondetContext>(0);
}

tree::TerminalNode* CINTParser::Num_exprContext::MULT() {
  return getToken(CINTParser::MULT, 0);
}

tree::TerminalNode* CINTParser::Num_exprContext::PLUS() {
  return getToken(CINTParser::PLUS, 0);
}


size_t CINTParser::Num_exprContext::getRuleIndex() const {
  return CINTParser::RuleNum_expr;
}

void CINTParser::Num_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum_expr(this);
}

void CINTParser::Num_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum_expr(this);
}


std::any CINTParser::Num_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitNum_expr(this);
  else
    return visitor->visitChildren(this);
}


CINTParser::Num_exprContext* CINTParser::num_expr() {
   return num_expr(0);
}

CINTParser::Num_exprContext* CINTParser::num_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CINTParser::Num_exprContext *_localctx = _tracker.createInstance<Num_exprContext>(_ctx, parentState);
  CINTParser::Num_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CINTParser::RuleNum_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CINTParser::OPENP: {
        setState(47);
        match(CINTParser::OPENP);
        setState(48);
        num_expr(0);
        setState(49);
        match(CINTParser::CLOSEP);
        break;
      }

      case CINTParser::MINUS: {
        setState(51);
        match(CINTParser::MINUS);
        setState(52);
        num_expr(8);
        break;
      }

      case CINTParser::V: {
        setState(53);
        match(CINTParser::V);
        break;
      }

      case CINTParser::ZERO: {
        setState(54);
        match(CINTParser::ZERO);
        break;
      }

      case CINTParser::POS: {
        setState(55);
        match(CINTParser::POS);
        break;
      }

      case CINTParser::NONDETNAME: {
        setState(56);
        nondet();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(70);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(68);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(59);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(60);
          match(CINTParser::MULT);
          setState(61);
          num_expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(62);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(63);
          match(CINTParser::PLUS);
          setState(64);
          num_expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(65);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(66);
          match(CINTParser::MINUS);
          setState(67);
          num_expr(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(72);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Bool_exprContext ------------------------------------------------------------------

CINTParser::Bool_exprContext::Bool_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::Bool_exprContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

std::vector<CINTParser::Bool_exprContext *> CINTParser::Bool_exprContext::bool_expr() {
  return getRuleContexts<CINTParser::Bool_exprContext>();
}

CINTParser::Bool_exprContext* CINTParser::Bool_exprContext::bool_expr(size_t i) {
  return getRuleContext<CINTParser::Bool_exprContext>(i);
}

tree::TerminalNode* CINTParser::Bool_exprContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}

tree::TerminalNode* CINTParser::Bool_exprContext::NOT() {
  return getToken(CINTParser::NOT, 0);
}

CINTParser::LitContext* CINTParser::Bool_exprContext::lit() {
  return getRuleContext<CINTParser::LitContext>(0);
}

tree::TerminalNode* CINTParser::Bool_exprContext::FALSE() {
  return getToken(CINTParser::FALSE, 0);
}

tree::TerminalNode* CINTParser::Bool_exprContext::TRUE() {
  return getToken(CINTParser::TRUE, 0);
}

tree::TerminalNode* CINTParser::Bool_exprContext::AND() {
  return getToken(CINTParser::AND, 0);
}

tree::TerminalNode* CINTParser::Bool_exprContext::OR() {
  return getToken(CINTParser::OR, 0);
}


size_t CINTParser::Bool_exprContext::getRuleIndex() const {
  return CINTParser::RuleBool_expr;
}

void CINTParser::Bool_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_expr(this);
}

void CINTParser::Bool_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_expr(this);
}


std::any CINTParser::Bool_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitBool_expr(this);
  else
    return visitor->visitChildren(this);
}


CINTParser::Bool_exprContext* CINTParser::bool_expr() {
   return bool_expr(0);
}

CINTParser::Bool_exprContext* CINTParser::bool_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CINTParser::Bool_exprContext *_localctx = _tracker.createInstance<Bool_exprContext>(_ctx, parentState);
  CINTParser::Bool_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, CINTParser::RuleBool_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(74);
      match(CINTParser::OPENP);
      setState(75);
      bool_expr(0);
      setState(76);
      match(CINTParser::CLOSEP);
      break;
    }

    case 2: {
      setState(78);
      match(CINTParser::NOT);
      setState(79);
      bool_expr(6);
      break;
    }

    case 3: {
      setState(80);
      lit();
      break;
    }

    case 4: {
      setState(81);
      match(CINTParser::FALSE);
      break;
    }

    case 5: {
      setState(82);
      match(CINTParser::TRUE);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(91);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Bool_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBool_expr);
          setState(85);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(86);
          match(CINTParser::AND);
          setState(87);
          bool_expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Bool_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBool_expr);
          setState(88);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(89);
          match(CINTParser::OR);
          setState(90);
          bool_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(95);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LitContext ------------------------------------------------------------------

CINTParser::LitContext::LitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CINTParser::Num_exprContext *> CINTParser::LitContext::num_expr() {
  return getRuleContexts<CINTParser::Num_exprContext>();
}

CINTParser::Num_exprContext* CINTParser::LitContext::num_expr(size_t i) {
  return getRuleContext<CINTParser::Num_exprContext>(i);
}

CINTParser::RelopContext* CINTParser::LitContext::relop() {
  return getRuleContext<CINTParser::RelopContext>(0);
}


size_t CINTParser::LitContext::getRuleIndex() const {
  return CINTParser::RuleLit;
}

void CINTParser::LitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLit(this);
}

void CINTParser::LitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLit(this);
}


std::any CINTParser::LitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitLit(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::LitContext* CINTParser::lit() {
  LitContext *_localctx = _tracker.createInstance<LitContext>(_ctx, getState());
  enterRule(_localctx, 8, CINTParser::RuleLit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    num_expr(0);
    setState(97);
    relop();
    setState(98);
    num_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelopContext ------------------------------------------------------------------

CINTParser::RelopContext::RelopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::RelopContext::LT() {
  return getToken(CINTParser::LT, 0);
}

tree::TerminalNode* CINTParser::RelopContext::LEQ() {
  return getToken(CINTParser::LEQ, 0);
}

tree::TerminalNode* CINTParser::RelopContext::EQ() {
  return getToken(CINTParser::EQ, 0);
}

tree::TerminalNode* CINTParser::RelopContext::GT() {
  return getToken(CINTParser::GT, 0);
}

tree::TerminalNode* CINTParser::RelopContext::GEQ() {
  return getToken(CINTParser::GEQ, 0);
}

tree::TerminalNode* CINTParser::RelopContext::NEQ() {
  return getToken(CINTParser::NEQ, 0);
}


size_t CINTParser::RelopContext::getRuleIndex() const {
  return CINTParser::RuleRelop;
}

void CINTParser::RelopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelop(this);
}

void CINTParser::RelopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelop(this);
}


std::any CINTParser::RelopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitRelop(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::RelopContext* CINTParser::relop() {
  RelopContext *_localctx = _tracker.createInstance<RelopContext>(_ctx, getState());
  enterRule(_localctx, 10, CINTParser::RuleRelop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1032192) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

CINTParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::LoopContext::WHILE() {
  return getToken(CINTParser::WHILE, 0);
}

tree::TerminalNode* CINTParser::LoopContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

CINTParser::Bool_exprContext* CINTParser::LoopContext::bool_expr() {
  return getRuleContext<CINTParser::Bool_exprContext>(0);
}

tree::TerminalNode* CINTParser::LoopContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}

tree::TerminalNode* CINTParser::LoopContext::OPENC() {
  return getToken(CINTParser::OPENC, 0);
}

tree::TerminalNode* CINTParser::LoopContext::CLOSEC() {
  return getToken(CINTParser::CLOSEC, 0);
}

CINTParser::InstructionsContext* CINTParser::LoopContext::instructions() {
  return getRuleContext<CINTParser::InstructionsContext>(0);
}


size_t CINTParser::LoopContext::getRuleIndex() const {
  return CINTParser::RuleLoop;
}

void CINTParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void CINTParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


std::any CINTParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::LoopContext* CINTParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 12, CINTParser::RuleLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(CINTParser::WHILE);
    setState(103);
    match(CINTParser::OPENP);
    setState(104);
    bool_expr(0);
    setState(105);
    match(CINTParser::CLOSEP);
    setState(106);
    match(CINTParser::OPENC);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137438953516) != 0) {
      setState(107);
      instructions();
    }
    setState(110);
    match(CINTParser::CLOSEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CINTParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::ConditionContext::IF() {
  return getToken(CINTParser::IF, 0);
}

tree::TerminalNode* CINTParser::ConditionContext::OPENP() {
  return getToken(CINTParser::OPENP, 0);
}

CINTParser::Bool_exprContext* CINTParser::ConditionContext::bool_expr() {
  return getRuleContext<CINTParser::Bool_exprContext>(0);
}

tree::TerminalNode* CINTParser::ConditionContext::CLOSEP() {
  return getToken(CINTParser::CLOSEP, 0);
}

std::vector<tree::TerminalNode *> CINTParser::ConditionContext::OPENC() {
  return getTokens(CINTParser::OPENC);
}

tree::TerminalNode* CINTParser::ConditionContext::OPENC(size_t i) {
  return getToken(CINTParser::OPENC, i);
}

CINTParser::ThenContext* CINTParser::ConditionContext::then() {
  return getRuleContext<CINTParser::ThenContext>(0);
}

std::vector<tree::TerminalNode *> CINTParser::ConditionContext::CLOSEC() {
  return getTokens(CINTParser::CLOSEC);
}

tree::TerminalNode* CINTParser::ConditionContext::CLOSEC(size_t i) {
  return getToken(CINTParser::CLOSEC, i);
}

tree::TerminalNode* CINTParser::ConditionContext::ELSE() {
  return getToken(CINTParser::ELSE, 0);
}

CINTParser::ElseContext* CINTParser::ConditionContext::else_() {
  return getRuleContext<CINTParser::ElseContext>(0);
}


size_t CINTParser::ConditionContext::getRuleIndex() const {
  return CINTParser::RuleCondition;
}

void CINTParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void CINTParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any CINTParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::ConditionContext* CINTParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 14, CINTParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(CINTParser::IF);
    setState(113);
    match(CINTParser::OPENP);
    setState(114);
    bool_expr(0);
    setState(115);
    match(CINTParser::CLOSEP);
    setState(116);
    match(CINTParser::OPENC);
    setState(117);
    then();
    setState(118);
    match(CINTParser::CLOSEC);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CINTParser::ELSE) {
      setState(119);
      match(CINTParser::ELSE);
      setState(120);
      match(CINTParser::OPENC);
      setState(121);
      else_();
      setState(122);
      match(CINTParser::CLOSEC);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThenContext ------------------------------------------------------------------

CINTParser::ThenContext::ThenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CINTParser::InstructionsContext* CINTParser::ThenContext::instructions() {
  return getRuleContext<CINTParser::InstructionsContext>(0);
}


size_t CINTParser::ThenContext::getRuleIndex() const {
  return CINTParser::RuleThen;
}

void CINTParser::ThenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThen(this);
}

void CINTParser::ThenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThen(this);
}


std::any CINTParser::ThenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitThen(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::ThenContext* CINTParser::then() {
  ThenContext *_localctx = _tracker.createInstance<ThenContext>(_ctx, getState());
  enterRule(_localctx, 16, CINTParser::RuleThen);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137438953516) != 0) {
      setState(126);
      instructions();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseContext ------------------------------------------------------------------

CINTParser::ElseContext::ElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CINTParser::InstructionsContext* CINTParser::ElseContext::instructions() {
  return getRuleContext<CINTParser::InstructionsContext>(0);
}


size_t CINTParser::ElseContext::getRuleIndex() const {
  return CINTParser::RuleElse;
}

void CINTParser::ElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse(this);
}

void CINTParser::ElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse(this);
}


std::any CINTParser::ElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitElse(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::ElseContext* CINTParser::else_() {
  ElseContext *_localctx = _tracker.createInstance<ElseContext>(_ctx, getState());
  enterRule(_localctx, 18, CINTParser::RuleElse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137438953516) != 0) {
      setState(129);
      instructions();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CINTParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::AssignmentContext::V() {
  return getToken(CINTParser::V, 0);
}

tree::TerminalNode* CINTParser::AssignmentContext::ASSIGN() {
  return getToken(CINTParser::ASSIGN, 0);
}

CINTParser::Num_exprContext* CINTParser::AssignmentContext::num_expr() {
  return getRuleContext<CINTParser::Num_exprContext>(0);
}

tree::TerminalNode* CINTParser::AssignmentContext::TERMINATOR() {
  return getToken(CINTParser::TERMINATOR, 0);
}


size_t CINTParser::AssignmentContext::getRuleIndex() const {
  return CINTParser::RuleAssignment;
}

void CINTParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CINTParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any CINTParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::AssignmentContext* CINTParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 20, CINTParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(CINTParser::V);
    setState(133);
    match(CINTParser::ASSIGN);
    setState(134);
    num_expr(0);
    setState(135);
    match(CINTParser::TERMINATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

CINTParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CINTParser::LoopContext* CINTParser::InstructionContext::loop() {
  return getRuleContext<CINTParser::LoopContext>(0);
}

CINTParser::ConditionContext* CINTParser::InstructionContext::condition() {
  return getRuleContext<CINTParser::ConditionContext>(0);
}

CINTParser::AssignmentContext* CINTParser::InstructionContext::assignment() {
  return getRuleContext<CINTParser::AssignmentContext>(0);
}

CINTParser::Assert_stmtContext* CINTParser::InstructionContext::assert_stmt() {
  return getRuleContext<CINTParser::Assert_stmtContext>(0);
}


size_t CINTParser::InstructionContext::getRuleIndex() const {
  return CINTParser::RuleInstruction;
}

void CINTParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void CINTParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


std::any CINTParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::InstructionContext* CINTParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 22, CINTParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CINTParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(137);
        loop();
        break;
      }

      case CINTParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(138);
        condition();
        break;
      }

      case CINTParser::V: {
        enterOuterAlt(_localctx, 3);
        setState(139);
        assignment();
        break;
      }

      case CINTParser::ASSERT: {
        enterOuterAlt(_localctx, 4);
        setState(140);
        assert_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CINTParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::DeclarationContext::INT() {
  return getToken(CINTParser::INT, 0);
}

std::vector<tree::TerminalNode *> CINTParser::DeclarationContext::V() {
  return getTokens(CINTParser::V);
}

tree::TerminalNode* CINTParser::DeclarationContext::V(size_t i) {
  return getToken(CINTParser::V, i);
}

tree::TerminalNode* CINTParser::DeclarationContext::TERMINATOR() {
  return getToken(CINTParser::TERMINATOR, 0);
}

std::vector<tree::TerminalNode *> CINTParser::DeclarationContext::COMMA() {
  return getTokens(CINTParser::COMMA);
}

tree::TerminalNode* CINTParser::DeclarationContext::COMMA(size_t i) {
  return getToken(CINTParser::COMMA, i);
}


size_t CINTParser::DeclarationContext::getRuleIndex() const {
  return CINTParser::RuleDeclaration;
}

void CINTParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CINTParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any CINTParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::DeclarationContext* CINTParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, CINTParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(CINTParser::INT);
    setState(144);
    match(CINTParser::V);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CINTParser::COMMA) {
      setState(145);
      match(CINTParser::COMMA);
      setState(146);
      match(CINTParser::V);
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(CINTParser::TERMINATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

CINTParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CINTParser::DeclarationContext *> CINTParser::DeclarationsContext::declaration() {
  return getRuleContexts<CINTParser::DeclarationContext>();
}

CINTParser::DeclarationContext* CINTParser::DeclarationsContext::declaration(size_t i) {
  return getRuleContext<CINTParser::DeclarationContext>(i);
}


size_t CINTParser::DeclarationsContext::getRuleIndex() const {
  return CINTParser::RuleDeclarations;
}

void CINTParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void CINTParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}


std::any CINTParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::DeclarationsContext* CINTParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 26, CINTParser::RuleDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(154);
      declaration();
      setState(157); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CINTParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionsContext ------------------------------------------------------------------

CINTParser::InstructionsContext::InstructionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CINTParser::InstructionContext *> CINTParser::InstructionsContext::instruction() {
  return getRuleContexts<CINTParser::InstructionContext>();
}

CINTParser::InstructionContext* CINTParser::InstructionsContext::instruction(size_t i) {
  return getRuleContext<CINTParser::InstructionContext>(i);
}


size_t CINTParser::InstructionsContext::getRuleIndex() const {
  return CINTParser::RuleInstructions;
}

void CINTParser::InstructionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstructions(this);
}

void CINTParser::InstructionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstructions(this);
}


std::any CINTParser::InstructionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitInstructions(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::InstructionsContext* CINTParser::instructions() {
  InstructionsContext *_localctx = _tracker.createInstance<InstructionsContext>(_ctx, getState());
  enterRule(_localctx, 28, CINTParser::RuleInstructions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      instruction();
      setState(162); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137438953516) != 0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreContext ------------------------------------------------------------------

CINTParser::PreContext::PreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::PreContext::TYPEDEF() {
  return getToken(CINTParser::TYPEDEF, 0);
}

tree::TerminalNode* CINTParser::PreContext::ENUM() {
  return getToken(CINTParser::ENUM, 0);
}

std::vector<tree::TerminalNode *> CINTParser::PreContext::OPENC() {
  return getTokens(CINTParser::OPENC);
}

tree::TerminalNode* CINTParser::PreContext::OPENC(size_t i) {
  return getToken(CINTParser::OPENC, i);
}

tree::TerminalNode* CINTParser::PreContext::FALSE() {
  return getToken(CINTParser::FALSE, 0);
}

tree::TerminalNode* CINTParser::PreContext::COMMA() {
  return getToken(CINTParser::COMMA, 0);
}

tree::TerminalNode* CINTParser::PreContext::TRUE() {
  return getToken(CINTParser::TRUE, 0);
}

tree::TerminalNode* CINTParser::PreContext::CLOSEC() {
  return getToken(CINTParser::CLOSEC, 0);
}

tree::TerminalNode* CINTParser::PreContext::BOOL() {
  return getToken(CINTParser::BOOL, 0);
}

std::vector<tree::TerminalNode *> CINTParser::PreContext::TERMINATOR() {
  return getTokens(CINTParser::TERMINATOR);
}

tree::TerminalNode* CINTParser::PreContext::TERMINATOR(size_t i) {
  return getToken(CINTParser::TERMINATOR, i);
}

tree::TerminalNode* CINTParser::PreContext::EXTERN() {
  return getToken(CINTParser::EXTERN, 0);
}

std::vector<tree::TerminalNode *> CINTParser::PreContext::INT() {
  return getTokens(CINTParser::INT);
}

tree::TerminalNode* CINTParser::PreContext::INT(size_t i) {
  return getToken(CINTParser::INT, i);
}

tree::TerminalNode* CINTParser::PreContext::NONDETNAME() {
  return getToken(CINTParser::NONDETNAME, 0);
}

std::vector<tree::TerminalNode *> CINTParser::PreContext::OPENP() {
  return getTokens(CINTParser::OPENP);
}

tree::TerminalNode* CINTParser::PreContext::OPENP(size_t i) {
  return getToken(CINTParser::OPENP, i);
}

tree::TerminalNode* CINTParser::PreContext::VOID() {
  return getToken(CINTParser::VOID, 0);
}

std::vector<tree::TerminalNode *> CINTParser::PreContext::CLOSEP() {
  return getTokens(CINTParser::CLOSEP);
}

tree::TerminalNode* CINTParser::PreContext::CLOSEP(size_t i) {
  return getToken(CINTParser::CLOSEP, i);
}

tree::TerminalNode* CINTParser::PreContext::MAIN() {
  return getToken(CINTParser::MAIN, 0);
}


size_t CINTParser::PreContext::getRuleIndex() const {
  return CINTParser::RulePre;
}

void CINTParser::PreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPre(this);
}

void CINTParser::PreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPre(this);
}


std::any CINTParser::PreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitPre(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::PreContext* CINTParser::pre() {
  PreContext *_localctx = _tracker.createInstance<PreContext>(_ctx, getState());
  enterRule(_localctx, 30, CINTParser::RulePre);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(CINTParser::TYPEDEF);
    setState(165);
    match(CINTParser::ENUM);
    setState(166);
    match(CINTParser::OPENC);
    setState(167);
    match(CINTParser::FALSE);
    setState(168);
    match(CINTParser::COMMA);
    setState(169);
    match(CINTParser::TRUE);
    setState(170);
    match(CINTParser::CLOSEC);
    setState(171);
    match(CINTParser::BOOL);
    setState(172);
    match(CINTParser::TERMINATOR);
    setState(173);
    match(CINTParser::EXTERN);
    setState(174);
    match(CINTParser::INT);
    setState(175);
    match(CINTParser::NONDETNAME);
    setState(176);
    match(CINTParser::OPENP);
    setState(177);
    match(CINTParser::VOID);
    setState(178);
    match(CINTParser::CLOSEP);
    setState(179);
    match(CINTParser::TERMINATOR);
    setState(180);
    match(CINTParser::INT);
    setState(181);
    match(CINTParser::MAIN);
    setState(182);
    match(CINTParser::OPENP);
    setState(183);
    match(CINTParser::CLOSEP);
    setState(184);
    match(CINTParser::OPENC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostContext ------------------------------------------------------------------

CINTParser::PostContext::PostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CINTParser::PostContext::RETURN() {
  return getToken(CINTParser::RETURN, 0);
}

tree::TerminalNode* CINTParser::PostContext::ZERO() {
  return getToken(CINTParser::ZERO, 0);
}

tree::TerminalNode* CINTParser::PostContext::TERMINATOR() {
  return getToken(CINTParser::TERMINATOR, 0);
}

tree::TerminalNode* CINTParser::PostContext::CLOSEC() {
  return getToken(CINTParser::CLOSEC, 0);
}


size_t CINTParser::PostContext::getRuleIndex() const {
  return CINTParser::RulePost;
}

void CINTParser::PostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPost(this);
}

void CINTParser::PostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPost(this);
}


std::any CINTParser::PostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitPost(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::PostContext* CINTParser::post() {
  PostContext *_localctx = _tracker.createInstance<PostContext>(_ctx, getState());
  enterRule(_localctx, 32, CINTParser::RulePost);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(CINTParser::RETURN);
    setState(187);
    match(CINTParser::ZERO);
    setState(188);
    match(CINTParser::TERMINATOR);
    setState(189);
    match(CINTParser::CLOSEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

CINTParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CINTParser::PreContext* CINTParser::MainContext::pre() {
  return getRuleContext<CINTParser::PreContext>(0);
}

CINTParser::PostContext* CINTParser::MainContext::post() {
  return getRuleContext<CINTParser::PostContext>(0);
}

CINTParser::DeclarationsContext* CINTParser::MainContext::declarations() {
  return getRuleContext<CINTParser::DeclarationsContext>(0);
}

CINTParser::InstructionsContext* CINTParser::MainContext::instructions() {
  return getRuleContext<CINTParser::InstructionsContext>(0);
}


size_t CINTParser::MainContext::getRuleIndex() const {
  return CINTParser::RuleMain;
}

void CINTParser::MainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain(this);
}

void CINTParser::MainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CINTListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain(this);
}


std::any CINTParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CINTVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

CINTParser::MainContext* CINTParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 34, CINTParser::RuleMain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    pre();
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CINTParser::INT) {
      setState(192);
      declarations();
    }
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137438953516) != 0) {
      setState(195);
      instructions();
    }
    setState(198);
    post();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CINTParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return num_exprSempred(antlrcpp::downCast<Num_exprContext *>(context), predicateIndex);
    case 3: return bool_exprSempred(antlrcpp::downCast<Bool_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CINTParser::num_exprSempred(Num_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool CINTParser::bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void CINTParser::initialize() {
  ::antlr4::internal::call_once(cintParserOnceFlag, cintParserInitialize);
}
