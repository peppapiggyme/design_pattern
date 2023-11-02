#include "ConcreteHandlerA.hpp"

#include <iostream>

ConcreteHandlerA::ConcreteHandlerA(Handler* sucessor) : m_successor(sucessor) {}

void ConcreteHandlerA::HandleRequest(Request* request) {
    if (request->GetType() == RequestType::A) {
        std::cout << "Request of type A handled by ConcreteHandlerA ..\n";
        request->Foo();
    } else {
        std::cout << "Looking for successor handler ..\n";
        if (m_successor) m_successor->HandleRequest(request);
    }
}
