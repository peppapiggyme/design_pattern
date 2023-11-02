#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "Adaptee.hpp"
#include "Target.hpp"

class Adapter : public Target, private Adaptee {
public:
    Adapter() noexcept;

    virtual void Request() const noexcept override;
};
#endif
