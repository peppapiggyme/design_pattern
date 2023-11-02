#include "ConcreteMediator.hpp"

ConcreteMediator::ConcreteMediator(ConcreteColleagueA* a, ConcreteColleagueB* b)
    : m_a(a), m_b(b) {}

void ConcreteMediator::InformColleagueA() const { m_a->Foo(); }

void ConcreteMediator::InformColleagueB() const { m_b->Bar(); }
