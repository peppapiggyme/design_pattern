#ifndef CONCRETEITERATOR_HPP
#define CONCRETEITERATOR_HPP

#include "Iterator.hpp"

#include <cstdint>
#include <stdexcept>

template <class Item>
class ConcreteAggregate;

template <class Item>
class ConcreteIterator : public Iterator<Item> {
public:
    explicit ConcreteIterator(const ConcreteAggregate<Item>& list);
    virtual void First() override;
    virtual void Next() override;
    virtual bool IsDone() const override;
    virtual Item CurrentItem() const override;

private:
    const ConcreteAggregate<Item> m_list;
    std::size_t                   m_current;
};

template <class Item>
inline ConcreteIterator<Item>::ConcreteIterator(
    const ConcreteAggregate<Item>& list)
    : m_list(list), m_current(0) {}

template <class Item>
inline void ConcreteIterator<Item>::First() {
    m_current = 0;
}

template <class Item>
inline void ConcreteIterator<Item>::Next() {
    ++m_current;
}

template <class Item>
inline bool ConcreteIterator<Item>::IsDone() const {
    return m_current >= m_list.Count();
}

template <class Item>
inline Item ConcreteIterator<Item>::CurrentItem() const {
    if (IsDone()) { throw std::runtime_error("out of bounds!"); }
    return m_list.Get(m_current);
}

#endif
