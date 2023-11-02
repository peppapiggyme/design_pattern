#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <map>

class AbstractExpression;

class Context {
public:
    Context();

    void Assign(AbstractExpression* expr, int value);
    int  Lookup(char name);

private:
    std::map<char, int> m_data;
};
#endif
