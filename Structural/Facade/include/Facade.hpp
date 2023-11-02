#ifndef FACADE_HPP
#define FACADE_HPP

#include <iostream>

class Facade {
public:
    static Facade& Instance() noexcept;
    void           Execute();

private:
    Facade() noexcept {}
    Facade(Facade&)  = delete;
    Facade(Facade&&) = delete;
};
#endif
