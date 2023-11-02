#include "ConcreteDecoratorB.hpp"

#include <iostream>

ConcreteDecoratorB::ConcreteDecoratorB(Component* comp) : Decorator(comp) {}

void ConcreteDecoratorB::Operation() {
    Decorator::Operation();
    SpecialOperationB();
}

void ConcreteDecoratorB::SpecialOperationB() {
    std::cout << "ConcreteDecoratorB SpecialOperationB ..\n";
}