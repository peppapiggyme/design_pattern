#include "Context.hpp"

Context::Context(State* s_init) : m_state(s_init) {}

Context::~Context() {
    if (m_state) delete m_state;
}

void Context::Request() { m_state->Handle(this); }

void Context::ChangeState(State* s) {
    State* trash = m_state;
    delete trash;
    m_state = s;
}
