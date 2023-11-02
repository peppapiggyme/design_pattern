#ifndef CONCRETEFLYWEIGHT_HPP
#define CONCRETEFLYWEIGHT_HPP

#include "Flyweight.hpp"

class ConcreteFlyweight : public Flyweight {
public:
    explicit ConcreteFlyweight(int i);
    virtual ~ConcreteFlyweight() override;
    virtual void Operation(int extrinsic_state) override;

private:
    int m_intrinsic_state;
};
#endif
