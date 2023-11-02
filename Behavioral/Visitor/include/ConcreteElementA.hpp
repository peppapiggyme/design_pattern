#ifndef CONCRETEELEMENTA_HPP
#define CONCRETEELEMENTA_HPP

#include "Element.hpp"

class ConcreteElementA : public Element {
public:
    virtual void Accept(Visitor* v) const;

    void OperationA1() const;
    void OperationA2() const;
};
#endif
