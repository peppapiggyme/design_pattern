#include "ConcreteProductA.hpp"

#include <iostream>

ConcreteProductA::ConcreteProductA() {
    std::cout << "ConcreteProductA created ..\n";
}

void ConcreteProductA::Foo() const {
    std::cout << "ConcreteProductA doing Foo .. \n";
}

void ConcreteProductA::Bar() const {
    std::cout << "ConcreteProductA doing Bar .. \n";
}
