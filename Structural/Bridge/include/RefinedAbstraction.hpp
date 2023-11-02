#ifndef REFINEDABSTRACTION_HPP
#define REFINEDABSTRACTION_HPP

#include "Abstraction.hpp"

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(Implementor* impl);

    void Operation12();
    void Operation21();
};
#endif
