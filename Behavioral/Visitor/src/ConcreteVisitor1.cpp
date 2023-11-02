#include "ConcreteVisitor1.hpp"
#include "ConcreteElementA.hpp"
#include "ConcreteElementB.hpp"

void ConcreteVisitor1::VisitConcreteElementA(const ConcreteElementA* a) const {
    a->OperationA1();
}

void ConcreteVisitor1::VisitConcreteElementB(const ConcreteElementB* b) const {
    b->OperationB1();
}
