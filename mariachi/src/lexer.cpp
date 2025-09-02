#include "lexer.hpp"

// Constructor
Lexer::Lexer(string code) {
    this->code = code;
}

// Deconstructor
Lexer::~Lexer() {
}

void Lexer::tokenize() {
    cout << code << endl;
}

bool Lexer::is_end() {
    return current >= code.size();
}

char Lexer::advance() {
    ++current;
    return code[current - 1];
}
