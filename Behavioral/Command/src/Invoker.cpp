#include "Invoker.hpp"

#include <iostream>

Invoker::Invoker() {}

void Invoker::Add(Command* command) { m_commands.push_back(command); }

void Invoker::Remove() { m_commands.pop_front(); }

void Invoker::Execute() {
    if (m_commands.empty()) {
        std::cout << "No more commands ..\n";
        return;
    }
    std::cout << "Invoking current command ..\n";
    m_commands.front()->Execute();
    Remove();
}
