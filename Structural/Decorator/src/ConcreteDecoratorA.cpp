#include "ConcreteDecoratorA.hpp"

#include <iostream>

ConcreteDecoratorA::ConcreteDecoratorA(Component* comp) : Decorator(comp) {}

void ConcreteDecoratorA::Operation() {
    Decorator::Operation();
    SpecialOperationA();
}

void ConcreteDecoratorA::SpecialOperationA() {
    std::cout << "ConcreteDecoratorA SpecialOperationA ..\n";
}
