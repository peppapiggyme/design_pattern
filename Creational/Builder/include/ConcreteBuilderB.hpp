#ifndef CONCRETEBUILDERB_HPP
#define CONCRETEBUILDERB_HPP

#include "Builder.hpp"
#include "Product.hpp"

class ConcreteBuilderB : public Builder {
public:
    ConcreteBuilderB();

    virtual void            BuildProduct() override;
    virtual void            BuildPart1() override;
    virtual void            BuildPart2() override;
    inline virtual Product* GetProduct() override { return m_product; }

private:
    Product* m_product;
};
#endif
