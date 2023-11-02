#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Handler.hpp"

class Client {
public:
    Client();

    void Execute(Handler* handler, Request* request) const;
};
#endif
