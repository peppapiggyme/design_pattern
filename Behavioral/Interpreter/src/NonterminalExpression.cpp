#include "NonterminalExpression.hpp"

#include <iostream>

NonterminalExpression::NonterminalExpression(char name, AbstractExpression* x,
                                             AbstractExpression* y)
    : AbstractExpression(name), m_x(x), m_y(y) {}

int NonterminalExpression::Interpret(Context* context) const {
    std::cout << "Interpret " << Name() << " into Add(" << m_x->Name() << ", "
              << m_y->Name() << ") ..\n";
    return m_x->Interpret(context) + m_y->Interpret(context);
}
