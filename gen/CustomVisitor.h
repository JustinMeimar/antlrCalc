#pragma once
#include "antlr4-runtime.h"
#include "LiteBaseVisitor.h"

class CustomVisitor : LiteBaseVisitor {
    public:     
        virtual std::any visitProg(LiteParser::ProgContext *ctx) override;
        virtual std::any visitExprAddSub(LiteParser::ExprAddSubContext *ctx) override;
        virtual std::any visitExprID(LiteParser::ExprIDContext* ctx) override;
};