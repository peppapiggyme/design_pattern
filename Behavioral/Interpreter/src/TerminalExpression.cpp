#include "TerminalExpression.hpp"

#include <iostream>

TerminalExpression::TerminalExpression(char name) : AbstractExpression(name) {}

int TerminalExpression::Interpret(Context* context) const {
    std::cout << "Interpret " << Name() << " into (" << Name() << ") ..\n";
    return context->Lookup(Name());
}
