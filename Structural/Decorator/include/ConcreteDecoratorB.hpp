#ifndef CONCRETEDECORATORB_HPP
#define CONCRETEDECORATORB_HPP

#include "Decorator.hpp"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* comp);

    virtual void Operation() override;

private:
    void SpecialOperationB();
};
#endif
