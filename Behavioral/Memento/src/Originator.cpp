#include "Originator.hpp"

#include <iostream>

Originator::Originator() : m_state(0x194) {}

Memento* Originator::CreateMemento() {
    std::cout << "Create memento with state " << m_state << '\n';
    return new Memento(m_state);
}

void Originator::ChangeState(int s) {
    m_state = s;
    std::cout << "Originator state changed to " << m_state << '\n';
}

void Originator::SetMemento(Memento* m) {
    m_state = m->GetState();
    std::cout << "Set memorised state " << m_state
              << " back to Originator ..\n";
}
