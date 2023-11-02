#include "Context.hpp"

Context::Context(Strategy* s, char data) : m_strategy(s), m_data(data) {}

void Context::Execute() const { m_strategy->DoAlgorithm(m_data); }
