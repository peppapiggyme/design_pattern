#ifndef CONCRETEFACTORY2_HPP
#define CONCRETEFACTORY2_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory2 : public AbstractFactory {
public:
    ConcreteFactory2();

    virtual AbstractProductA* CreateProductA() override;
    virtual AbstractProductB* CreateProductB() override;
};
#endif
