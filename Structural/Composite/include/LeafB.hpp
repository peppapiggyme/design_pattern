#ifndef LEAFB_HPP
#define LEAFB_HPP

#include "Component.hpp"

class LeafB : public Component {
public:
    LeafB();
    virtual void Operation() override;
};
#endif
