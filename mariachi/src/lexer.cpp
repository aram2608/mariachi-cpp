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

void Lexer::advance() {
}
