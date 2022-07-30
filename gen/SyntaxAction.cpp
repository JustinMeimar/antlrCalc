// Custom Derrivation of the BaseListener Class
#include <iostream>
#include "SyntaxAction.h"
#include "LiteParser.h"

void SyntaxAction::enterProg(LiteParser::ProgContext* ctx) {
    std::cout << "Recieved Root rule Prog" << std::endl; 
}

void SyntaxAction::enterStatExpr(LiteParser::StatExprContext* ctx){
    std::cout << "Recieved Stat Expr" << std::endl;
}

void SyntaxAction::enterStatAssignExpr(LiteParser::StatAssignExprContext* ctx){
    std::cout << "Recieved Stat Assign Expr" << std::endl;
}

void SyntaxAction::enterExprAddSub(LiteParser::ExprAddSubContext* ctx){
    std::cout << "Recieved add sub ctx.. " << std::endl;
    std::cout << ctx->children[0]->getText() << " + " 
              << ctx->children[2]->getText() << std::endl;
}

void SyntaxAction::enterStatNewLine(LiteParser::StatNewLineContext *ctx){
    std::cout << "Recieved new line.. " << std::endl;
}

void SyntaxAction::enterExprID(LiteParser::ExprIDContext* ctx){
    std::cout << "Recieved Expr::INT" << std::endl;
    std::cout << ctx->getText();
}