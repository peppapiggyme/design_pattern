#include "ConcreteHandlerB.hpp"

#include <iostream>

ConcreteHandlerB::ConcreteHandlerB(Handler* sucessor) : m_successor(sucessor) {}

void ConcreteHandlerB::HandleRequest(Request* request) {
    if (request->GetType() == RequestType::B) {
        std::cout << "Request of type B handled by ConcreteHandlerB ..\n";
        request->Bar();
    } else {
        std::cout << "Looking for successor handler ..\n";
        if (m_successor) m_successor->HandleRequest(request);
    }
}
