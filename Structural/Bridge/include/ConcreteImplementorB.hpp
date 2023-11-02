#ifndef CONCRETEIMPLEMENTORB_HPP
#define CONCRETEIMPLEMENTORB_HPP

#include "Implementor.hpp"

class ConcreteImplementorB : public Implementor {
public:
    ConcreteImplementorB();

    virtual void OperationImp1() override;
    virtual void OperationImp2() override;
};
#endif
