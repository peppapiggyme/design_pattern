#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "Builder.hpp"

#include <memory>

class Director {
public:
    Director();

    void Create(Builder* builder);
    void Construct(Builder* builder);
};
#endif
