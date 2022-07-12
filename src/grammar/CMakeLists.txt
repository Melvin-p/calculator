cmake_minimum_required(VERSION 3.0.0)
project(calculator_grammar VERSION 0.1.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

find_package(antlr4-runtime REQUIRED)

include_directories( ${ANTLR4_INCLUDE_DIR} )
link_directories(${ANTLR4_LIB_DIR})

add_library(
        calc_gram
        STATIC 
Calculator.interp
Calculator.tokens
CalculatorBaseListener.cpp
CalculatorBaseListener.h
CalculatorHelperS.cpp   
CalculatorHelperS.h
CalculatorLexer.cpp       
CalculatorLexer.h
CalculatorLexer.interp    
CalculatorLexer.tokens    
CalculatorListener.cpp    
CalculatorListener.h      
CalculatorListenerImp.cpp 
CalculatorListenerImp.h   
CalculatorParser.cpp      
CalculatorParser.h
ExceptionError.cpp
ExceptionError.h
)
target_link_libraries(calc_gram antlr4_shared)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
