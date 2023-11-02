#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "AbstractFactory.hpp"
#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"

class Client {
public:
    Client();
    void Create(AbstractFactory* factory) const;
};
#endif
