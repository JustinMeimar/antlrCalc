#pragma once

#include "antlr4-runtime.h"
#include "LiteBaseListener.h"

class SyntaxAction : public LiteBaseListener {
    public:
        void enterProg(LiteParser::ProgContext * ctx) override; 
};