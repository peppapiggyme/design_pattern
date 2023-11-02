#ifndef CONCRETESTRATEGYC_HPP
#define CONCRETESTRATEGYC_HPP

#include "Strategy.hpp"

class ConcreteStrategyC : public Strategy {
public:
    ConcreteStrategyC();
    virtual void DoAlgorithm(char data) override;
};
#endif
