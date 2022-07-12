
// Generated from ./Calculator.g4 by ANTLR 4.10.1


#include "CalculatorListener.h"

#include "CalculatorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalculatorParserStaticData final {
  CalculatorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalculatorParserStaticData(const CalculatorParserStaticData&) = delete;
  CalculatorParserStaticData(CalculatorParserStaticData&&) = delete;
  CalculatorParserStaticData& operator=(const CalculatorParserStaticData&) = delete;
  CalculatorParserStaticData& operator=(CalculatorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag calculatorParserOnceFlag;
CalculatorParserStaticData *calculatorParserStaticData = nullptr;

void calculatorParserInitialize() {
  assert(calculatorParserStaticData == nullptr);
  auto staticData = std::make_unique<CalculatorParserStaticData>(
    std::vector<std::string>{
      "aexp"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'^'", "'/'", "'*'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "REAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,9,31,2,0,7,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,9,8,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,26,8,0,10,0,12,0,29,9,0,
  	1,0,0,1,0,1,0,0,0,35,0,8,1,0,0,0,2,3,6,0,-1,0,3,9,5,8,0,0,4,5,5,1,0,0,
  	5,6,3,0,0,0,6,7,5,2,0,0,7,9,1,0,0,0,8,2,1,0,0,0,8,4,1,0,0,0,9,27,1,0,
  	0,0,10,11,10,5,0,0,11,12,5,3,0,0,12,26,3,0,0,6,13,14,10,4,0,0,14,15,5,
  	4,0,0,15,26,3,0,0,5,16,17,10,3,0,0,17,18,5,5,0,0,18,26,3,0,0,4,19,20,
  	10,2,0,0,20,21,5,6,0,0,21,26,3,0,0,3,22,23,10,1,0,0,23,24,5,7,0,0,24,
  	26,3,0,0,2,25,10,1,0,0,0,25,13,1,0,0,0,25,16,1,0,0,0,25,19,1,0,0,0,25,
  	22,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,1,1,0,0,0,29,
  	27,1,0,0,0,3,8,25,27
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calculatorParserStaticData = staticData.release();
}

}

CalculatorParser::CalculatorParser(TokenStream *input) : CalculatorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalculatorParser::CalculatorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalculatorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calculatorParserStaticData->atn, calculatorParserStaticData->decisionToDFA, calculatorParserStaticData->sharedContextCache, options);
}

CalculatorParser::~CalculatorParser() {
  delete _interpreter;
}

const atn::ATN& CalculatorParser::getATN() const {
  return *calculatorParserStaticData->atn;
}

std::string CalculatorParser::getGrammarFileName() const {
  return "Calculator.g4";
}

const std::vector<std::string>& CalculatorParser::getRuleNames() const {
  return calculatorParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalculatorParser::getVocabulary() const {
  return calculatorParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalculatorParser::getSerializedATN() const {
  return calculatorParserStaticData->serializedATN;
}


//----------------- AexpContext ------------------------------------------------------------------

CalculatorParser::AexpContext::AexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::AexpContext::getRuleIndex() const {
  return CalculatorParser::RuleAexp;
}

void CalculatorParser::AexpContext::copyFrom(AexpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

std::vector<CalculatorParser::AexpContext *> CalculatorParser::DivContext::aexp() {
  return getRuleContexts<CalculatorParser::AexpContext>();
}

CalculatorParser::AexpContext* CalculatorParser::DivContext::aexp(size_t i) {
  return getRuleContext<CalculatorParser::AexpContext>(i);
}

CalculatorParser::DivContext::DivContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void CalculatorParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}
//----------------- AddContext ------------------------------------------------------------------

std::vector<CalculatorParser::AexpContext *> CalculatorParser::AddContext::aexp() {
  return getRuleContexts<CalculatorParser::AexpContext>();
}

CalculatorParser::AexpContext* CalculatorParser::AddContext::aexp(size_t i) {
  return getRuleContext<CalculatorParser::AexpContext>(i);
}

CalculatorParser::AddContext::AddContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void CalculatorParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}
//----------------- SubContext ------------------------------------------------------------------

std::vector<CalculatorParser::AexpContext *> CalculatorParser::SubContext::aexp() {
  return getRuleContexts<CalculatorParser::AexpContext>();
}

CalculatorParser::AexpContext* CalculatorParser::SubContext::aexp(size_t i) {
  return getRuleContext<CalculatorParser::AexpContext>(i);
}

CalculatorParser::SubContext::SubContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}
void CalculatorParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<CalculatorParser::AexpContext *> CalculatorParser::MultContext::aexp() {
  return getRuleContexts<CalculatorParser::AexpContext>();
}

CalculatorParser::AexpContext* CalculatorParser::MultContext::aexp(size_t i) {
  return getRuleContext<CalculatorParser::AexpContext>(i);
}

CalculatorParser::MultContext::MultContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::MultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMult(this);
}
void CalculatorParser::MultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMult(this);
}
//----------------- BrackectsContext ------------------------------------------------------------------

CalculatorParser::AexpContext* CalculatorParser::BrackectsContext::aexp() {
  return getRuleContext<CalculatorParser::AexpContext>(0);
}

CalculatorParser::BrackectsContext::BrackectsContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::BrackectsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrackects(this);
}
void CalculatorParser::BrackectsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrackects(this);
}
//----------------- ExpContext ------------------------------------------------------------------

std::vector<CalculatorParser::AexpContext *> CalculatorParser::ExpContext::aexp() {
  return getRuleContexts<CalculatorParser::AexpContext>();
}

CalculatorParser::AexpContext* CalculatorParser::ExpContext::aexp(size_t i) {
  return getRuleContext<CalculatorParser::AexpContext>(i);
}

CalculatorParser::ExpContext::ExpContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}
void CalculatorParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}
//----------------- AtomContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::AtomContext::REAL() {
  return getToken(CalculatorParser::REAL, 0);
}

CalculatorParser::AtomContext::AtomContext(AexpContext *ctx) { copyFrom(ctx); }

void CalculatorParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}
void CalculatorParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

CalculatorParser::AexpContext* CalculatorParser::aexp() {
   return aexp(0);
}

CalculatorParser::AexpContext* CalculatorParser::aexp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::AexpContext *_localctx = _tracker.createInstance<AexpContext>(_ctx, parentState);
  CalculatorParser::AexpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, CalculatorParser::RuleAexp, precedence);

    

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
    setState(8);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::REAL: {
        _localctx = _tracker.createInstance<AtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(3);
        match(CalculatorParser::REAL);
        break;
      }

      case CalculatorParser::T__0: {
        _localctx = _tracker.createInstance<BrackectsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(4);
        match(CalculatorParser::T__0);
        setState(5);
        antlrcpp::downCast<BrackectsContext *>(_localctx)->inner = aexp(0);
        setState(6);
        match(CalculatorParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(27);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(25);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpContext>(_tracker.createInstance<AexpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAexp);
          setState(10);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(11);
          match(CalculatorParser::T__2);
          setState(12);
          antlrcpp::downCast<ExpContext *>(_localctx)->right = aexp(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<AexpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAexp);
          setState(13);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(14);
          match(CalculatorParser::T__3);
          setState(15);
          antlrcpp::downCast<DivContext *>(_localctx)->right = aexp(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<AexpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAexp);
          setState(16);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(17);
          match(CalculatorParser::T__4);
          setState(18);
          antlrcpp::downCast<MultContext *>(_localctx)->right = aexp(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<AexpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAexp);
          setState(19);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(20);
          match(CalculatorParser::T__5);
          setState(21);
          antlrcpp::downCast<AddContext *>(_localctx)->right = aexp(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<AexpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAexp);
          setState(22);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(23);
          match(CalculatorParser::T__6);
          setState(24);
          antlrcpp::downCast<SubContext *>(_localctx)->right = aexp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(29);
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

bool CalculatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return aexpSempred(antlrcpp::downCast<AexpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::aexpSempred(AexpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void CalculatorParser::initialize() {
  std::call_once(calculatorParserOnceFlag, calculatorParserInitialize);
}
