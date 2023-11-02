#ifndef CONCRETEMEDIATOR_HPP
#define CONCRETEMEDIATOR_HPP

#include "ConcreteColleagueA.hpp"
#include "ConcreteColleagueB.hpp"
#include "Mediator.hpp"

class ConcreteMediator : public Mediator {
public:
    ConcreteMediator(ConcreteColleagueA* a, ConcreteColleagueB* b);

    virtual void InformColleagueA() const override;
    virtual void InformColleagueB() const override;

private:
    ConcreteColleagueA* m_a;
    ConcreteColleagueB* m_b;
};
#endif
