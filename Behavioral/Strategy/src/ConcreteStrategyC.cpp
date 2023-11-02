#include "ConcreteStrategyC.hpp"

#include <iostream>

ConcreteStrategyC::ConcreteStrategyC() {}

void ConcreteStrategyC::DoAlgorithm(char data) {
    std::cout << "Algorithm of Strategy C [" << data << " -> "
              << (char) (data + ('z' - 'a')) << "] ..\n";
}