#ifndef CONCRETEFACTORY1_HPP
#define CONCRETEFACTORY1_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory1 : public AbstractFactory {
public:
    ConcreteFactory1();

    virtual AbstractProductA* CreateProductA() override;
    virtual AbstractProductB* CreateProductB() override;
};
#endif
