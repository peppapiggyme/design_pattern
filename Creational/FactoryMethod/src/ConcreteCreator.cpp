#include "ConcreteCreator.hpp"

#include "ConcreteProductA.hpp"
#include "ConcreteProductB.hpp"

template <>
Product* ConcreteCreator<ConcreteProductA>::MakeProduct() {
    return new ConcreteProductA;
}

template <>
Product* ConcreteCreator<ConcreteProductB>::MakeProduct() {
    return new ConcreteProductB;
}
