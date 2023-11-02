#ifndef CONCRETEELEMENTB_HPP
#define CONCRETEELEMENTB_HPP

#include "Element.hpp"

class ConcreteElementB : public Element {
public:
    virtual void Accept(Visitor* v) const;

    void OperationB1() const;
    void OperationB2() const;
};
#endif
