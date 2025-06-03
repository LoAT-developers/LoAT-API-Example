
// Generated from CINT.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CINTLexer : public antlr4::Lexer {
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

  explicit CINTLexer(antlr4::CharStream *input);

  ~CINTLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

