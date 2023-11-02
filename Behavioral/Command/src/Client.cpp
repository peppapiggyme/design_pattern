#include "Client.hpp"

Client::Client() {}

void Client::AddCommand(Invoker* invoker, Command* command) const {
    invoker->Add(command);
}

void Client::Execute(Invoker* invoker) const { invoker->Execute(); }
