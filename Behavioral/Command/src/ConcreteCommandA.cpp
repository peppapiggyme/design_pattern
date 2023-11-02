#include "ConcreteCommandA.hpp"

#include <iostream>

ConcreteCommandA::ConcreteCommandA(Receiver* receiver) : m_receiver(receiver) {}

void ConcreteCommandA::Execute() const {
    std::cout << "|- Execute ConcreteCommand A ..\n";
    m_receiver->Foo();
    m_receiver->Foo();
}
