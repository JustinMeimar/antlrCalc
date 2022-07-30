#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "LiteLexer.h"
#include "LiteParser.h"
#include "LiteListener.h"
#include "LiteVisitor.h"
#include "LiteBaseVisitor.h"
#include "SyntaxAction.h"
#include "CustomVisitor.h"

int main(int argc, char* argv[]){  
    //fetch inputs from command line
    std::ifstream stream;
    stream.open("inputs/input2.txt");

    // SETUP 
    antlr4::ANTLRInputStream input(stream);
    LiteLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    LiteParser parser(&tokens);

    //LiteParser::ProgContext* tree = parser.prog();
    //std::cout << tree->toStringTree(); 
    //SyntaxAction derrived;  // listener
    //antlr4::tree::ParseTree *tree = parser.prog();  //parse tree

    CustomVisitor visitor;
    visitor.visitProg(parser.prog());

    /*
    for(int i = 0; i < tree->children.size(); i++){
        std::cout << tree->children[i]->toStringTree() << " | ";
        std::cout << tree->children[i]->getText() << std::endl;
    }
    */

    //antlr4::tree::ParseTreeWalker::DEFAULT.walk(&derrived, tree);

    return 0;
}


//tree->enterRule();    
    //How the Parser Works 
    // parser.setBuildParseTree(true); 
    // std::cout << parser.getBuildParseTree(); 
    
    
    //How the Lexer Works 
    // std::vector<std::unique_ptr<antlr4::Token>> lexerToks = lexer.getAllTokens();
    // std::cout << lexerToks.size() << std::endl;

    // for(int j =0; j<lexerToks.size(); j++){
    //     std::cout << lexerToks[j]->getText() << std::endl;
    // }
    // std::cout << "Lexer Tokens Itterated ... " << std::endl;
        
//How the Token Class Works 

/* 
    std::vector<antlr4::Token*> toks = tokens.getTokens();
    std::cout << toks.size() << std::endl; 
    for(int i = 0; i < toks.size(); i++){ 
        std::cout << toks[i]->getType() << " | ";
        std::cout << toks[i]->getLine() << " | ";
        std::cout << toks[i]->getCharPositionInLine() << " | ";
        std::cout << toks[i]->getTokenIndex() << " | ";
        std::cout << toks[i]->getChannel() << " | ";
        std::cout << toks[i]->getTokenSource() << " | ";
        std::cout << toks[i]->getInputStream() << " | ";
        std::cout << toks[i]->getText() << std::endl;
    } 
*/