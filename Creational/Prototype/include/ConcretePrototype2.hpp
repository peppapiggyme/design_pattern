#ifndef CONCRETEPROTOTYPE2_HPP
#define CONCRETEPROTOTYPE2_HPP

#include "Prototype.hpp"

class ConcretePrototype2 : public Prototype {
public:
    ConcretePrototype2();
    virtual ~ConcretePrototype2() override;

    virtual Prototype* Clone() const override;
};
#endif
