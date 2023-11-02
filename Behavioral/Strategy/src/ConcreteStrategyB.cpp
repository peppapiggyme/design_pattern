#include "ConcreteStrategyB.hpp"

#include <iostream>

ConcreteStrategyB::ConcreteStrategyB() {}

void ConcreteStrategyB::DoAlgorithm(char data) {
    std::cout << "Algorithm of Strategy B [" << data << " -> "
              << (char) (data + ('a' - 'A')) << "] ..\n";
}