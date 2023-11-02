#ifndef AGGREGATE_HPP
#define AGGREGATE_HPP

#include "Iterator.hpp"

template <class Item>
class Aggregate {
public:
    virtual Iterator<Item>* CreateIterator() const noexcept = 0;
};
#endif
