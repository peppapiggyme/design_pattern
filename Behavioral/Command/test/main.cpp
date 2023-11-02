
#include "Client.hpp"
#include "Receiver.hpp"
#include "ConcreteCommandA.hpp"
#include "ConcreteCommandB.hpp"

#include <memory>

int main()
{
    auto client = std::make_unique<Client>();

    auto receiver = std::make_unique<Receiver>();
    auto invoker = std::make_unique<Invoker>();

    auto command_a = std::make_unique<ConcreteCommandA>(receiver.get());
    auto command_b = std::make_unique<ConcreteCommandB>(receiver.get());

    client->AddCommand(invoker.get(), command_a.get());
    client->AddCommand(invoker.get(), command_b.get());

    client->Execute(invoker.get());
    client->Execute(invoker.get());
    client->Execute(invoker.get());
    
    return 0;
}
