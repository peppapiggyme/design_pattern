#ifndef ABSTRACTION_HPP
#define ABSTRACTION_HPP

#include "Implementor.hpp"

class Abstraction {
public:
    explicit Abstraction(Implementor* impl);

    void Operation1();
    void Operation2();

private:
    Implementor* m_impl;
};
#endif
