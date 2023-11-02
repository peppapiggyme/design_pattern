#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Component.hpp"

class Client {
public:
    Client();

    void Execute(Component* component) const;
};
#endif
