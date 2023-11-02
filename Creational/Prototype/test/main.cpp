
#include "Client.hpp"
#include "ConcretePrototype1.hpp"
#include "ConcretePrototype2.hpp"

#include <memory>

int main()
{
    auto client = std::make_unique<Client>();
    client->Create(std::make_unique<ConcretePrototype1>().get());
    client->Create(std::make_unique<ConcretePrototype2>().get());
    
    return 0;
}
