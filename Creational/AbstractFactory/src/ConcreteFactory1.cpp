#include "ConcreteFactory1.hpp"

#include "ConcreteProductA1.hpp"
#include "ConcreteProductB1.hpp"

ConcreteFactory1::ConcreteFactory1() {}

AbstractProductA* ConcreteFactory1::CreateProductA() {
    return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB() {
    return new ConcreteProductB1();
}
