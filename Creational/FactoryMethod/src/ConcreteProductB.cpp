#include "ConcreteProductB.hpp"

#include <iostream>

ConcreteProductB::ConcreteProductB() {
    std::cout << "ConcreteProductB created ..\n";
}

void ConcreteProductB::Foo() const {
    std::cout << "ConcreteProductB doing Foo .. \n";
}

void ConcreteProductB::Bar() const {
    std::cout << "ConcreteProductB doing Bar .. \n";
}
