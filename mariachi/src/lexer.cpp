#include "lexer.hpp"

// Constructor
Lexer::Lexer(string code) {
    this->code = code;
}

// Deconstructor
Lexer::~Lexer() {
}

vector<Token> Lexer::tokenize() {
    cout << code << endl;
}

char Lexer::advance() {
    ++current;
    return code[current - 1];
}
