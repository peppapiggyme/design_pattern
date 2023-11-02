#include "ConcreteObserver.hpp"
#include "Subject.hpp"

#include <iostream>

ConcreteObserver::ConcreteObserver(ConcreteSubject* s)
    : m_subject(s), m_obs_state(0) {
    m_subject->Attach(this);
}

ConcreteObserver::~ConcreteObserver() { m_subject->Detach(this); }

void ConcreteObserver::Update(Subject* s) {
    if (s != m_subject) return;
    std::cout << std::hex << this << " state set to " << m_subject->GetState()
              << " ..\n";
    m_obs_state = m_subject->GetState();
}
