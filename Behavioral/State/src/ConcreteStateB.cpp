#include "ConcreteStateB.hpp"
#include "ConcreteStateA.hpp"
#include "Context.hpp"

#include <iostream>

ConcreteStateB::~ConcreteStateB() {}

void ConcreteStateB::Handle(Context* c) {
    std::cout << "State = B, transitting to A ..\n";
    ChangeState(c, new ConcreteStateA);
}
