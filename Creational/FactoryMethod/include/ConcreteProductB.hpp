#ifndef CONCRETEPRODUCTB_HPP
#define CONCRETEPRODUCTB_HPP

#include "Product.hpp"

class ConcreteProductB : public Product {
public:
    ConcreteProductB();

    virtual void Foo() const;
    virtual void Bar() const;
};
#endif
