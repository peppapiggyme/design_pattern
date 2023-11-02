#ifndef ABSTRACTEXPRESSION_HPP
#define ABSTRACTEXPRESSION_HPP

#include "Context.hpp"

class AbstractExpression {
public:
    explicit AbstractExpression(char name) : m_name(name) {}

    virtual int Interpret(Context* context) const = 0;

    inline char Name() const { return m_name; }

private:
    char m_name;
};
#endif
