#ifndef CONCRETESTATEA_HPP
#define CONCRETESTATEA_HPP

#include "State.hpp"

class ConcreteStateA : public State {
public:
    virtual ~ConcreteStateA();
    virtual void Handle(Context* c) override;
};
#endif
