#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

class Mediator {
public:
    virtual void InformColleagueA() const = 0;
    virtual void InformColleagueB() const = 0;
};
#endif
