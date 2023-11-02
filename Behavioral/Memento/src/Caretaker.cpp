#include "Caretaker.hpp"

Caretaker::Caretaker(Originator* originator) : m_originator(originator) {}

void Caretaker::CreateMemento() {
    m_memento.reset(m_originator->CreateMemento());
}

void Caretaker::SetMemento() { m_originator->SetMemento(m_memento.get()); }
