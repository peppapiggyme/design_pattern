#ifndef STATE_HPP
#define STATE_HPP

class Context;

class State {
public:
    virtual ~State() {}
    virtual void Handle(Context* c) = 0;

protected:
    virtual void ChangeState(Context* c, State* s);
};
#endif
