#ifndef CONCRETESTATEB_HPP
#define CONCRETESTATEB_HPP

#include "State.hpp"

class ConcreteStateB : public State {
public:
    virtual ~ConcreteStateB();
    virtual void Handle(Context* c) override;
};
#endif
