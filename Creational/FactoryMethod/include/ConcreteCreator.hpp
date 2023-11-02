#ifndef CONCRETECREATOR_HPP
#define CONCRETECREATOR_HPP

#include "Creator.hpp"

template <class ProductType>
class ConcreteCreator : public Creator {
public:
    ConcreteCreator();
    virtual Product* MakeProduct() override;
};
#endif

template <class ProductType>
inline ConcreteCreator<ProductType>::ConcreteCreator() {}

template <class ProductType>
inline Product* ConcreteCreator<ProductType>::MakeProduct() {
    return new ProductType;
}
