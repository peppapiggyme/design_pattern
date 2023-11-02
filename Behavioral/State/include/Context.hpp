#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "State.hpp"

class Context {
public:
    explicit Context(State* s_init);
    ~Context();
    void Request();

private:
    friend class State;
    void ChangeState(State* s);

private:
    State* m_state;
};
#endif
