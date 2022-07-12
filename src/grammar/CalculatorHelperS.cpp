#include "CalculatorHelperS.h"

#include <sstream>
#include <string>

#include "./CalculatorLexer.h"
#include "./CalculatorListenerImp.h"
#include "./CalculatorParser.h"
#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "ExceptionError.h"
#include "tree/IterativeParseTreeWalker.h"
#include "tree/ParseTree.h"

// S on end because a class called CalculatorHelper exists somewhere in the antlr files
std::string CalculatorHelperS::calculate(std::stringstream &ss) {
    antlr4::ANTLRInputStream input(ss);
    CalculatorLexer tokenStream(&input);
    tokenStream.removeErrorListeners();
    tokenStream.addErrorListener(new ExceptionError());
    antlr4::CommonTokenStream tokens(&tokenStream);
    CalculatorParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(new ExceptionError());
    antlr4::tree::ParseTree *tree = nullptr;
    try {
        tree = parser.aexp();
    } catch (antlr4::ParseCancellationException &e) {
        return e.what();
    }
    antlr4::tree::IterativeParseTreeWalker walker;
    CalculatorListenerImp *listner = new CalculatorListenerImp();
    walker.walk(listner, tree);
    return std::to_string(listner->get_result());
};