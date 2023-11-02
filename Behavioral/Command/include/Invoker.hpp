#ifndef INVOKER_HPP
#define INVOKER_HPP

#include "Command.hpp"

#include <list>

class Invoker {
public:
    Invoker();

    void Add(Command* command);
    void Remove();
    void Execute();

private:
    std::list<Command*> m_commands;
};
#endif
