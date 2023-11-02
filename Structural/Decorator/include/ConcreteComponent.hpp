#ifndef CONCRETECOMPONENT_HPP
#define CONCRETECOMPONENT_HPP

#include "Component.hpp"

class ConcreteComponent : public Component {
public:
    ConcreteComponent();

    virtual void Operation() override;
};
#endif
