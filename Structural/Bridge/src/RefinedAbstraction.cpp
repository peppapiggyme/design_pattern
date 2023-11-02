#include "RefinedAbstraction.hpp"

#include <iostream>

RefinedAbstraction::RefinedAbstraction(Implementor* impl) : Abstraction(impl) {}

void RefinedAbstraction::Operation12() {
    std::cout << "Operate 1 2 in RefinedAbstraction\n";
    Operation1();
    Operation2();
}

void RefinedAbstraction::Operation21() {
    std::cout << "Operate 2 1 in RefinedAbstraction\n";
    Operation2();
    Operation1();
}
