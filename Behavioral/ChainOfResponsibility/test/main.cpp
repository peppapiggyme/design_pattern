
#include "Client.hpp"
#include "ConcreteHandlerA.hpp"
#include "ConcreteHandlerB.hpp"

#include <memory>

int main()
{
    auto client = std::make_unique<Client>();
    auto handler_b = std::make_unique<ConcreteHandlerB>(nullptr);
    auto handler_a = std::make_unique<ConcreteHandlerA>(handler_b.get());

    auto request_a = std::make_unique<Request>(RequestType::A);
    auto request_b = std::make_unique<Request>(RequestType::B);
    auto request_c = std::make_unique<Request>(RequestType::C);

    client->Execute(handler_a.get(), request_a.get());
    client->Execute(handler_a.get(), request_b.get());
    client->Execute(handler_a.get(), request_c.get());

    return 0;
}
