#ifndef CONCRETEPROTOTYPE1_HPP
#define CONCRETEPROTOTYPE1_HPP

#include "Prototype.hpp"

class ConcretePrototype1 : public Prototype {
public:
    ConcretePrototype1();
    virtual ~ConcretePrototype1() override;

    virtual Prototype* Clone() const override;
};
#endif
