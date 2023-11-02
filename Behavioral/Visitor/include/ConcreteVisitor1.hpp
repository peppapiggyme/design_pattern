#ifndef CONCRETEVISITOR1_HPP
#define CONCRETEVISITOR1_HPP

#include "Visitor.hpp"

class ConcreteVisitor1 : public Visitor {
public:
    virtual void
    VisitConcreteElementA(const ConcreteElementA* a) const override;
    virtual void
    VisitConcreteElementB(const ConcreteElementB* b) const override;
};
#endif
