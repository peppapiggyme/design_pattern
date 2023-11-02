#include "ConcreteCommandB.hpp"

#include <iostream>

ConcreteCommandB::ConcreteCommandB(Receiver* receiver) : m_receiver(receiver) {}

void ConcreteCommandB::Execute() const {
    std::cout << "|- Execute ConcreteCommand B ..\n";
    m_receiver->Bar();
    m_receiver->Bar();
}
