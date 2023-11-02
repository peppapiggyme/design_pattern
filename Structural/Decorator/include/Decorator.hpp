#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "Component.hpp"

class Decorator : public Component {
public:
    explicit Decorator(Component* comp);

    virtual void Operation() override;

private:
    Component* m_comp;
};
#endif
