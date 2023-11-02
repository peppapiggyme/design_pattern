#ifndef CONCRETEHANDLERA_HPP
#define CONCRETEHANDLERA_HPP

#include "Handler.hpp"

class ConcreteHandlerA : public Handler {
public:
    explicit ConcreteHandlerA(Handler* sucessor);

    virtual void HandleRequest(Request* request) override;

private:
    Handler* m_successor;
};
#endif
