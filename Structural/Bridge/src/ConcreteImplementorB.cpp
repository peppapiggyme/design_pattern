#include "ConcreteImplementorB.hpp"

#include <iostream>

ConcreteImplementorB::ConcreteImplementorB() {}

void ConcreteImplementorB::OperationImp1() {
    std::cout << "Operate 1 in ConcreteImplementorB ..\n";
}

void ConcreteImplementorB::OperationImp2() {
    std::cout << "Operate 2 in ConcreteImplementorB ..\n";
}
