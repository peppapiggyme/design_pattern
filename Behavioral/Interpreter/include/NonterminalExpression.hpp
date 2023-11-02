#ifndef NONTERMINALEXPRESSION_HPP
#define NONTERMINALEXPRESSION_HPP

#include "AbstractExpression.hpp"

class NonterminalExpression : public AbstractExpression {
public:
    NonterminalExpression(char name, AbstractExpression* x,
                          AbstractExpression* y);

    virtual int Interpret(Context* context) const override;

private:
    AbstractExpression* m_x;
    AbstractExpression* m_y;
};
#endif
