#include "ConcreteElementA.hpp"
#include "Visitor.hpp"

#include <iostream>

void ConcreteElementA::Accept(Visitor* v) const {
    v->VisitConcreteElementA(this);
}

void ConcreteElementA::OperationA1() const {
    std::cout << "ConcreteElement A Operate A1 ..\n";
}

void ConcreteElementA::OperationA2() const {
    std::cout << "ConcreteElement A Operate A2 ..\n";
}
