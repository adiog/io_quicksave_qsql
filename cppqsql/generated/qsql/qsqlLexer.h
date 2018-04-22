
// Generated from qsql.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"


namespace qsql {


class  qsqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, IDENTIFIER = 3, EQUAL = 4, K_IN = 5, K_MATCH = 6, 
    K_NAME = 7, K_TEXT = 8, K_TYPE = 9, K_AUTHOR = 10, K_SOURCE = 11, K_URL = 12, 
    K_GET = 13, K_TAG = 14, K_NOT = 15, K_AND = 16, K_OR = 17, K_FROM = 18, 
    K_TILL = 19, K_WHERE = 20, SPACES = 21
  };

  qsqlLexer(antlr4::CharStream *input);
  ~qsqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace qsql
