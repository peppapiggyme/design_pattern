#ifndef BUILDER_HPP
#define BUILDER_HPP

#include "Product.hpp"

class Builder {
public:
    Builder();

    virtual void     BuildProduct() = 0;
    virtual void     BuildPart1() {}
    virtual void     BuildPart2() {}
    virtual Product* GetProduct() = 0;
};
#endif
