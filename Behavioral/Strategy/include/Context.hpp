#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "Strategy.hpp"

class Context {
public:
    Context(Strategy* s, char data);
    void Execute() const;

private:
    Strategy* m_strategy;
    char      m_data;
};
#endif
