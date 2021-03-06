
// Generated from ./Calculator.g4 by ANTLR 4.10.1


#include "CalculatorLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalculatorLexerStaticData final {
  CalculatorLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalculatorLexerStaticData(const CalculatorLexerStaticData&) = delete;
  CalculatorLexerStaticData(CalculatorLexerStaticData&&) = delete;
  CalculatorLexerStaticData& operator=(const CalculatorLexerStaticData&) = delete;
  CalculatorLexerStaticData& operator=(CalculatorLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag calculatorlexerLexerOnceFlag;
CalculatorLexerStaticData *calculatorlexerLexerStaticData = nullptr;

void calculatorlexerLexerInitialize() {
  assert(calculatorlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<CalculatorLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "REAL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'^'", "'/'", "'*'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "REAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,55,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,4,7,35,8,7,11,7,12,7,36,1,7,1,7,4,7,41,8,7,11,7,12,7,42,1,7,4,7,
  	46,8,7,11,7,12,7,47,3,7,50,8,7,1,8,1,8,1,8,1,8,0,0,9,1,1,3,2,5,3,7,4,
  	9,5,11,6,13,7,15,8,17,9,1,0,3,1,0,48,57,1,0,46,46,3,0,9,10,13,13,32,32,
  	58,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,
  	0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,1,19,1,0,0,0,3,21,1,0,0,
  	0,5,23,1,0,0,0,7,25,1,0,0,0,9,27,1,0,0,0,11,29,1,0,0,0,13,31,1,0,0,0,
  	15,49,1,0,0,0,17,51,1,0,0,0,19,20,5,40,0,0,20,2,1,0,0,0,21,22,5,41,0,
  	0,22,4,1,0,0,0,23,24,5,94,0,0,24,6,1,0,0,0,25,26,5,47,0,0,26,8,1,0,0,
  	0,27,28,5,42,0,0,28,10,1,0,0,0,29,30,5,43,0,0,30,12,1,0,0,0,31,32,5,45,
  	0,0,32,14,1,0,0,0,33,35,7,0,0,0,34,33,1,0,0,0,35,36,1,0,0,0,36,34,1,0,
  	0,0,36,37,1,0,0,0,37,38,1,0,0,0,38,40,7,1,0,0,39,41,7,0,0,0,40,39,1,0,
  	0,0,41,42,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,50,1,0,0,0,44,46,7,0,
  	0,0,45,44,1,0,0,0,46,47,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,50,1,0,
  	0,0,49,34,1,0,0,0,49,45,1,0,0,0,50,16,1,0,0,0,51,52,7,2,0,0,52,53,1,0,
  	0,0,53,54,6,8,0,0,54,18,1,0,0,0,5,0,36,42,47,49,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calculatorlexerLexerStaticData = staticData.release();
}

}

CalculatorLexer::CalculatorLexer(CharStream *input) : Lexer(input) {
  CalculatorLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calculatorlexerLexerStaticData->atn, calculatorlexerLexerStaticData->decisionToDFA, calculatorlexerLexerStaticData->sharedContextCache);
}

CalculatorLexer::~CalculatorLexer() {
  delete _interpreter;
}

std::string CalculatorLexer::getGrammarFileName() const {
  return "Calculator.g4";
}

const std::vector<std::string>& CalculatorLexer::getRuleNames() const {
  return calculatorlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CalculatorLexer::getChannelNames() const {
  return calculatorlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CalculatorLexer::getModeNames() const {
  return calculatorlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CalculatorLexer::getVocabulary() const {
  return calculatorlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalculatorLexer::getSerializedATN() const {
  return calculatorlexerLexerStaticData->serializedATN;
}

const atn::ATN& CalculatorLexer::getATN() const {
  return *calculatorlexerLexerStaticData->atn;
}




void CalculatorLexer::initialize() {
  std::call_once(calculatorlexerLexerOnceFlag, calculatorlexerLexerInitialize);
}
