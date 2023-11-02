#include "Client.hpp"

#include <memory>

Client::Client() {}

void Client::Create(AbstractFactory* factory) const {
    delete factory->CreateProductA();
    delete factory->CreateProductB();
}
