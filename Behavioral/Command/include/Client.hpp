#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Command.hpp"
#include "Invoker.hpp"

class Client {
public:
    Client();

    void AddCommand(Invoker* invoker, Command* command) const;
    void Execute(Invoker* invoker) const;
};
#endif
