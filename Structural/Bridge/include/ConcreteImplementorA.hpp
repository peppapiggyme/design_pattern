#ifndef CONCRETEIMPLEMENTORA_HPP
#define CONCRETEIMPLEMENTORA_HPP

#include "Implementor.hpp"

class ConcreteImplementorA : public Implementor {
public:
    ConcreteImplementorA();

    virtual void OperationImp1() override;
    virtual void OperationImp2() override;
};
#endif
