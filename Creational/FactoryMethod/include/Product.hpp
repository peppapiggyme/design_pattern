#ifndef PRODUCT_HPP
#define PRODUCT_HPP

class Product {
public:
    Product();

    virtual void Foo() const = 0;
    virtual void Bar() const = 0;
};
#endif
