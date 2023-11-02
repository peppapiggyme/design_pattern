#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "Product.hpp"

class ConcreteProductA : public Product {
public:
    ConcreteProductA();

    virtual void Foo() const;
    virtual void Bar() const;
};
#endif
