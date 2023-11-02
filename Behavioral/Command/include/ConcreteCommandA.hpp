#ifndef CONCRETECOMMANDA_HPP
#define CONCRETECOMMANDA_HPP

#include "Command.hpp"
#include "Receiver.hpp"

class ConcreteCommandA : public Command {
public:
    ConcreteCommandA(Receiver* receiver);

    virtual void Execute() const override;

private:
    Receiver* m_receiver;
};
#endif
