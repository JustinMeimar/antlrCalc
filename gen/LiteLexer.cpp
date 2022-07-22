
// Generated from Lite.g4 by ANTLR 4.10.1


#include "LiteLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LiteLexerStaticData final {
  LiteLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LiteLexerStaticData(const LiteLexerStaticData&) = delete;
  LiteLexerStaticData(LiteLexerStaticData&&) = delete;
  LiteLexerStaticData& operator=(const LiteLexerStaticData&) = delete;
  LiteLexerStaticData& operator=(LiteLexerStaticData&&) = delete;

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

std::once_flag litelexerLexerOnceFlag;
LiteLexerStaticData *litelexerLexerStaticData = nullptr;

void litelexerLexerInitialize() {
  assert(litelexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<LiteLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "ID", "INT", 
      "NL"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'-'", "'+'", "'*'", "'/'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "ID", "INT", "NL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,10,50,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,7,4,7,37,8,7,11,7,12,7,38,1,8,4,8,42,8,8,11,8,12,8,43,1,
  	9,3,9,47,8,9,1,9,1,9,0,0,10,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,1,0,2,2,0,65,90,97,122,1,0,48,57,52,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,1,21,1,0,0,0,3,23,1,0,0,0,5,25,1,0,0,0,7,27,
  	1,0,0,0,9,29,1,0,0,0,11,31,1,0,0,0,13,33,1,0,0,0,15,36,1,0,0,0,17,41,
  	1,0,0,0,19,46,1,0,0,0,21,22,5,61,0,0,22,2,1,0,0,0,23,24,5,45,0,0,24,4,
  	1,0,0,0,25,26,5,43,0,0,26,6,1,0,0,0,27,28,5,42,0,0,28,8,1,0,0,0,29,30,
  	5,47,0,0,30,10,1,0,0,0,31,32,5,40,0,0,32,12,1,0,0,0,33,34,5,41,0,0,34,
  	14,1,0,0,0,35,37,7,0,0,0,36,35,1,0,0,0,37,38,1,0,0,0,38,36,1,0,0,0,38,
  	39,1,0,0,0,39,16,1,0,0,0,40,42,7,1,0,0,41,40,1,0,0,0,42,43,1,0,0,0,43,
  	41,1,0,0,0,43,44,1,0,0,0,44,18,1,0,0,0,45,47,5,13,0,0,46,45,1,0,0,0,46,
  	47,1,0,0,0,47,48,1,0,0,0,48,49,5,10,0,0,49,20,1,0,0,0,4,0,38,43,46,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  litelexerLexerStaticData = staticData.release();
}

}

LiteLexer::LiteLexer(CharStream *input) : Lexer(input) {
  LiteLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *litelexerLexerStaticData->atn, litelexerLexerStaticData->decisionToDFA, litelexerLexerStaticData->sharedContextCache);
}

LiteLexer::~LiteLexer() {
  delete _interpreter;
}

std::string LiteLexer::getGrammarFileName() const {
  return "Lite.g4";
}

const std::vector<std::string>& LiteLexer::getRuleNames() const {
  return litelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LiteLexer::getChannelNames() const {
  return litelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LiteLexer::getModeNames() const {
  return litelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LiteLexer::getVocabulary() const {
  return litelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LiteLexer::getSerializedATN() const {
  return litelexerLexerStaticData->serializedATN;
}

const atn::ATN& LiteLexer::getATN() const {
  return *litelexerLexerStaticData->atn;
}




void LiteLexer::initialize() {
  std::call_once(litelexerLexerOnceFlag, litelexerLexerInitialize);
}
