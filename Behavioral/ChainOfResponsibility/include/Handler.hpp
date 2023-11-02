#ifndef HANDLER_HPP
#define HANDLER_HPP

#include "Request.hpp"

class Handler {
public:
    Handler();

    virtual void HandleRequest(Request* request) = 0;
};
#endif
