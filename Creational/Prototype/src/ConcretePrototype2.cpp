#include "ConcretePrototype2.hpp"

#include <iostream>

ConcretePrototype2::ConcretePrototype2() {}
ConcretePrototype2::~ConcretePrototype2() {}

Prototype* ConcretePrototype2::Clone() const {
    std::cout << "ConcretePrototype2 copied .. \n";
    return new ConcretePrototype2;
}
