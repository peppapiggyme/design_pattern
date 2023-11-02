#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"

class AbstractFactory {
public:
    AbstractFactory();

    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
};
#endif
