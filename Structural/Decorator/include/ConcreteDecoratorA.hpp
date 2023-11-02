#ifndef CONCRETEDECORATORA_HPP
#define CONCRETEDECORATORA_HPP

#include "Decorator.hpp"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* comp);

    virtual void Operation() override;

private:
    void SpecialOperationA();
};
#endif
