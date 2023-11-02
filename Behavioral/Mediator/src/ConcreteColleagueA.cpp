#include "ConcreteColleagueA.hpp"

#include <iostream>

void ConcreteColleagueA::Changed() {
    std::cout << "On ConcreteColleagueA Changed ..\n";
    m_mediator->InformColleagueB();
}

void ConcreteColleagueA::Foo() { std::cout << "ConcreteColleagueA Foo ..\n"; }
