#ifndef CREATOR_HPP
#define CREATOR_HPP

#include "Product.hpp"

#include <memory>

class Creator {
public:
    Creator();

    virtual Product* MakeProduct() = 0;
    virtual Product* ProductFoo();
    virtual Product* ProductBar();

    Product* GetProduct();

private:
    // for lazy initialization
    std::unique_ptr<Product> m_product;
};
#endif
