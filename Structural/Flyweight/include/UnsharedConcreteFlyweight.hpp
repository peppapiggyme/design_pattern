#ifndef UNSHAREDCONCRETEFLYWEIGHT_HPP
#define UNSHAREDCONCRETEFLYWEIGHT_HPP

#include "Flyweight.hpp"

class UnsharedConcreteFlyweight : public Flyweight {
public:
    UnsharedConcreteFlyweight();
    virtual ~UnsharedConcreteFlyweight() override;
    virtual void Operation(int extrinsic_state) override;

private:
    int m_all_state;
};
#endif
