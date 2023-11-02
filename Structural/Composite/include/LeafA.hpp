#ifndef LEAFA_HPP
#define LEAFA_HPP

#include "Component.hpp"

class LeafA : public Component {
public:
    LeafA();
    virtual void Operation() override;
};
#endif
