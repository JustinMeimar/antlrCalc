#include <iostream>
#include "CustomVisitor.h"
#include "LiteParser.h"

// std::vector<int32_t> memory=  {
//     "id" = 7
//     ""

// }

std::any CustomVisitor::visitProg(LiteParser::ProgContext* ctx){
    std::cout << "visit program" << std::endl;
    return visitChildren(ctx);
}

std::any CustomVisitor::visitExprAddSub(LiteParser::ExprAddSubContext *ctx){
    //std::cout << ctx->expr()[0]; 
    std::cout << "visit expr add sub" << std::endl;
    LiteParser::ExprContext* left = ctx->expr()[0];
    LiteParser::ExprContext* right  = ctx->expr()[1];

    std::cout << "left: " << left->getText() << " ";
    std::cout << "right: " << right->getText() << " ";

    std::cout << "sum: " << left->getText() + right->getText(); 
     
    return visitChildren(ctx);
}

std::any CustomVisitor::visitExprID(LiteParser::ExprIDContext* ctx){
    std::cout << "visut expr ID" << std::endl;
    
    return visitChildren(ctx);
}