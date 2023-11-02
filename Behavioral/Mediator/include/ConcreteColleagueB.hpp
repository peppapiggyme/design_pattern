#ifndef CONCRETECOLLEAGUEB_HPP
#define CONCRETECOLLEAGUEB_HPP

#include "Colleague.hpp"

class ConcreteColleagueB : public Colleague {
public:
    virtual void Changed() override;
    void         Bar();
};
#endif
