#include "Memento.hpp"

Memento::Memento(int s) : m_state(s) {}

int Memento::GetState() const { return m_state; }

void Memento::SetState(int s) { m_state = s; }
