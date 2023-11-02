#ifndef CONCRETEHANDLERB_HPP
#define CONCRETEHANDLERB_HPP

#include "Handler.hpp"

class ConcreteHandlerB : public Handler {
public:
    explicit ConcreteHandlerB(Handler* sucessor);

    virtual void HandleRequest(Request* request) override;

private:
    Handler* m_successor;
};
#endif
