#include "Context.hpp"
#include "AbstractExpression.hpp"

Context::Context() {}

void Context::Assign(AbstractExpression* expr, int value) {
    m_data.insert(std::make_pair(expr->Name(), value));
}

int Context::Lookup(char name) { return m_data.at(name); }
