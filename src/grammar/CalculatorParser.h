
// Generated from ./Calculator.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  CalculatorParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    REAL = 8, WS = 9
  };

  enum {
    RuleAexp = 0
  };

  explicit CalculatorParser(antlr4::TokenStream *input);

  CalculatorParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CalculatorParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AexpContext; 

  class  AexpContext : public antlr4::ParserRuleContext {
  public:
    AexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AexpContext() = default;
    void copyFrom(AexpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public AexpContext {
  public:
    DivContext(AexpContext *ctx);

    CalculatorParser::AexpContext *left = nullptr;
    CalculatorParser::AexpContext *right = nullptr;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AddContext : public AexpContext {
  public:
    AddContext(AexpContext *ctx);

    CalculatorParser::AexpContext *left = nullptr;
    CalculatorParser::AexpContext *right = nullptr;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubContext : public AexpContext {
  public:
    SubContext(AexpContext *ctx);

    CalculatorParser::AexpContext *left = nullptr;
    CalculatorParser::AexpContext *right = nullptr;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultContext : public AexpContext {
  public:
    MultContext(AexpContext *ctx);

    CalculatorParser::AexpContext *left = nullptr;
    CalculatorParser::AexpContext *right = nullptr;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BrackectsContext : public AexpContext {
  public:
    BrackectsContext(AexpContext *ctx);

    CalculatorParser::AexpContext *inner = nullptr;
    AexpContext *aexp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpContext : public AexpContext {
  public:
    ExpContext(AexpContext *ctx);

    CalculatorParser::AexpContext *left = nullptr;
    CalculatorParser::AexpContext *right = nullptr;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AtomContext : public AexpContext {
  public:
    AtomContext(AexpContext *ctx);

    antlr4::tree::TerminalNode *REAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AexpContext* aexp();
  AexpContext* aexp(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool aexpSempred(AexpContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

