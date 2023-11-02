#ifndef CONCRETECOMMANDB_HPP
#define CONCRETECOMMANDB_HPP

#include "Command.hpp"
#include "Receiver.hpp"

class ConcreteCommandB : public Command {
public:
    ConcreteCommandB(Receiver* receiver);

    virtual void Execute() const override;

private:
    Receiver* m_receiver;
};
#endif
