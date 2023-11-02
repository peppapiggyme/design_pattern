#include "ConcretePrototype1.hpp"

#include <iostream>

ConcretePrototype1::ConcretePrototype1() {}
ConcretePrototype1::~ConcretePrototype1() {}

Prototype* ConcretePrototype1::Clone() const {
    std::cout << "ConcretePrototype1 copied .. \n";
    return new ConcretePrototype1;
}
