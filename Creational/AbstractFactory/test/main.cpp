#include "Client.hpp"
#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

#include <memory>

int main() {
    Client client;
    auto   factory1 = std::make_unique<ConcreteFactory1>();
    auto   factory2 = std::make_unique<ConcreteFactory2>();
    client.Create(factory1.get());
    client.Create(factory2.get());

    return 0;
}