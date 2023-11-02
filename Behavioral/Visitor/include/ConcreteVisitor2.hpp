#ifndef CONCRETEVISITOR2_HPP
#define CONCRETEVISITOR2_HPP

#include "Visitor.hpp"

class ConcreteVisitor2 : public Visitor {
public:
    virtual void
    VisitConcreteElementA(const ConcreteElementA* a) const override;
    virtual void
    VisitConcreteElementB(const ConcreteElementB* b) const override;
};
#endif
