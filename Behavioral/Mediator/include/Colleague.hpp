#ifndef COLLEAGUE_HPP
#define COLLEAGUE_HPP

#include "Mediator.hpp"

class Colleague {
public:
    virtual void Changed();
    virtual void ConnectTo(Mediator* mediator);

protected:
    Mediator* m_mediator;
};
#endif
