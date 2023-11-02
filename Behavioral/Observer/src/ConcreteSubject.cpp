#include "ConcreteSubject.hpp"

void ConcreteSubject::SetState(int s) { m_state = s; }

int ConcreteSubject::GetState() { return m_state; }

void ConcreteSubject::Action(int s) {
    SetState(s);
    Notify();
}
