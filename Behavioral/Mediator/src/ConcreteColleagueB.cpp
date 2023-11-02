#include "ConcreteColleagueB.hpp"

#include <iostream>

void ConcreteColleagueB::Changed() {
    std::cout << "On ConcreteColleagueB Changed ..\n";
    m_mediator->InformColleagueA();
}

void ConcreteColleagueB::Bar() { std::cout << "ConcreteColleagueB Bar ..\n"; }
