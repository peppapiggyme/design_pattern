#ifndef CONCRETECLASS_HPP
#define CONCRETECLASS_HPP

#include "AbstractClass.hpp"

class ConcreteClass : public AbstractClass {
private:
    virtual void PrimitiveOperation1() override;
    virtual void PrimitiveOperation2() override;
};
#endif
