#include "ConcreteVisitor2.hpp"
#include "ConcreteElementA.hpp"
#include "ConcreteElementB.hpp"

void ConcreteVisitor2::VisitConcreteElementA(const ConcreteElementA* a) const {
    a->OperationA2();
}

void ConcreteVisitor2::VisitConcreteElementB(const ConcreteElementB* b) const {
    b->OperationB2();
}