#include "ConcreteFactory2.hpp"

#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"

ConcreteFactory2::ConcreteFactory2() {}

AbstractProductA* ConcreteFactory2::CreateProductA() {
    return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB() {
    return new ConcreteProductB2();
}
