#include "ConcreteElementB.hpp"
#include "Visitor.hpp"

#include <iostream>

void ConcreteElementB::Accept(Visitor* v) const {
    v->VisitConcreteElementB(this);
}

void ConcreteElementB::OperationB1() const {
    std::cout << "ConcreteElement B Operate B1 ..\n";
}

void ConcreteElementB::OperationB2() const {
    std::cout << "ConcreteElement B Operate B2 ..\n";
}
