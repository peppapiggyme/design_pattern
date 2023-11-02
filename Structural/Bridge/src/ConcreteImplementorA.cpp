#include "ConcreteImplementorA.hpp"

#include <iostream>

ConcreteImplementorA::ConcreteImplementorA() {}

void ConcreteImplementorA::OperationImp1() {
    std::cout << "Operate 1 in ConcreteImplementorA ..\n";
}

void ConcreteImplementorA::OperationImp2() {
    std::cout << "Operate 2 in ConcreteImplementorA ..\n";
}
