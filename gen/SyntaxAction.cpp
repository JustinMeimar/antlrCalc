#include <iostream>

#include "SyntaxAction.h"
#include "LiteParser.h"

void SyntaxAction::enterProg(LiteParser::ProgContext* ctx) {
    std::cout << "Recieved Root rule Prog\n";
}