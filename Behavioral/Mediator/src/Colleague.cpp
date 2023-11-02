#include "Colleague.hpp"

#include <iostream>

void Colleague::Changed() {
    std::cout << "On Colleague Changed ..\n";
    m_mediator->InformColleagueA();
    m_mediator->InformColleagueB();
}

void Colleague::ConnectTo(Mediator* mediator) { m_mediator = mediator; }
