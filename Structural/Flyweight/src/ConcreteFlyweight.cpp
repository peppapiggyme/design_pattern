#include "ConcreteFlyweight.hpp"

#include <iostream>

ConcreteFlyweight::ConcreteFlyweight(int i) : m_intrinsic_state(i) {}

ConcreteFlyweight::~ConcreteFlyweight() {}

void ConcreteFlyweight::Operation(int extrinsic_state) {
    std::cout << "ConcreteFlyweight Operation, "
              << "extrinsic state = " << extrinsic_state << ", "
              << "intrinsic state = " << m_intrinsic_state << " \n";
}
