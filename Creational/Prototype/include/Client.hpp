#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Prototype.hpp"

class Client {
public:
    Client();

    void Create(Prototype* prototype) const;
};
#endif
