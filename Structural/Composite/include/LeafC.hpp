#ifndef LEAFC_HPP
#define LEAFC_HPP

#include "Component.hpp"

class LeafC : public Component {
public:
    LeafC();
    virtual void Operation() override;
};
#endif
