#include "UnsharedConcreteFlyweight.hpp"

#include <iostream>

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight() : m_all_state(0) {}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight() {}

void UnsharedConcreteFlyweight::Operation(int extrinsic_state) {
    std::cout << "ConcreteFlyweight Operation, "
              << "extrinsic state = " << extrinsic_state << ", "
              << "all state = " << m_all_state << " \n";
}
