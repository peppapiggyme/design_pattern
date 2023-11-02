#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Target.hpp"

class Client {
public:
    Client() noexcept;

    void Execute(Target* target) const noexcept;
};
#endif
