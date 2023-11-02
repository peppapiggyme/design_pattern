#include "ConcreteStrategyA.hpp"

#include <iostream>

ConcreteStrategyA::ConcreteStrategyA() {}

void ConcreteStrategyA::DoAlgorithm(char data) {
    std::cout << "Algorithm of Strategy A [" << data << " -> "
              << (char) (data + ('A' - 'a')) << "] ..\n";
}