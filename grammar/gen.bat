mkdir out
del out
antlr4 -listener ./Calculator.g4  -no-visitor -Dlanguage=Cpp -o ./out/