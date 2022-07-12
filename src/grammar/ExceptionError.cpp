#include "ExceptionError.h"

#include <sstream>


void ExceptionError::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) {
    e = nullptr;
    std::stringstream oss;
    oss << "line: " << line << ":" << charPositionInLine << " " << msg;
    error_msg = oss.str();
    throw antlr4::ParseCancellationException(error_msg);
}