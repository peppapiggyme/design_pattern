#include "ConcreteComponent.hpp"

#include <iostream>

ConcreteComponent::ConcreteComponent() {}

void ConcreteComponent::Operation() {
    std::cout << "ConcreteComponent Operation ..\n";
}