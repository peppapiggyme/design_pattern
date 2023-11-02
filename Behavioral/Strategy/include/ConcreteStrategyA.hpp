#ifndef CONCRETESTRATEGYA_HPP
#define CONCRETESTRATEGYA_HPP

#include "Strategy.hpp"

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA();
    virtual void DoAlgorithm(char data) override;
};
#endif
