#include "LexicalAnalyzer.h"
#include <stdlib.h>
int main() {
    LexicalAnalyzer lex_analysis;
    lex_analysis.read_seed_code("seed_code.txt");
    lex_analysis.output_seed_code();
    system("pause");
}