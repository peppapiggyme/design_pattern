#ifndef CONCRETESTRATEGYB_HPP
#define CONCRETESTRATEGYB_HPP

#include "Strategy.hpp"

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB();
    virtual void DoAlgorithm(char data) override;
};
#endif
