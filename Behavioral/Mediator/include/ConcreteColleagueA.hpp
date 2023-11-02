#ifndef CONCRETECOLLEAGUEA_HPP
#define CONCRETECOLLEAGUEA_HPP

#include "Colleague.hpp"

class ConcreteColleagueA : public Colleague {
public:
    virtual void Changed() override;
    void         Foo();
};
#endif
