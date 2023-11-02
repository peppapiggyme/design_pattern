#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include "Context.hpp"

#include <iostream>

ConcreteStateA::~ConcreteStateA() {}

void ConcreteStateA::Handle(Context* c) {
    std::cout << "State = A, transitting to B ..\n";
    ChangeState(c, new ConcreteStateB);
}
