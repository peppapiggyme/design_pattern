#ifndef TERMINALEXPRESSION_HPP
#define TERMINALEXPRESSION_HPP

#include "AbstractExpression.hpp"

class TerminalExpression : public AbstractExpression {
public:
    explicit TerminalExpression(char name);

    virtual int Interpret(Context* context) const override;
};
#endif
