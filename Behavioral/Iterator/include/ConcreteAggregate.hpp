#ifndef LIST_HPP
#define LIST_HPP

#include "Aggregate.hpp"
#include "ConcreteIterator.hpp"

#include <array>
#include <cstdint>
#include <stdexcept>

static constexpr std::size_t MAX_CAPACITY = 128;

template <class Item>
class ConcreteAggregate : public Aggregate<Item> {
public:
    ConcreteAggregate() noexcept;
    std::size_t Count() const noexcept;
    Item        Get(std::size_t index) const;
    void        Push(Item item) noexcept;
    void        Pop() noexcept;
    Item        Top() const;

public:
    virtual Iterator<Item>* CreateIterator() const noexcept override;

private:
    std::size_t                    m_count;
    std::array<Item, MAX_CAPACITY> m_data;
};

template <class Item>
inline ConcreteAggregate<Item>::ConcreteAggregate() noexcept
    : m_count(0), m_data() {}

template <class Item>
inline std::size_t ConcreteAggregate<Item>::Count() const noexcept {
    return m_count;
}

template <class Item>
inline Item ConcreteAggregate<Item>::Get(std::size_t index) const {
    if (index >= Count()) { throw std::runtime_error("out of bounds!"); }
    auto i = index % MAX_CAPACITY;
    return m_data.at(i);
}

template <class Item>
inline void ConcreteAggregate<Item>::Push(Item item) noexcept {
    m_data[m_count] = item;
    ++m_count;
    m_count %= MAX_CAPACITY;
}

template <class Item>
inline void ConcreteAggregate<Item>::Pop() noexcept {
    if (Count() > 0) { m_count--; }
}

template <class Item>
inline Item ConcreteAggregate<Item>::Top() const {
    if (Count() > 0)
        return m_data[m_count - 1];
    else { throw std::runtime_error("list is empty!"); }
}

template <class Item>
inline Iterator<Item>*
ConcreteAggregate<Item>::CreateIterator() const noexcept {
    return new ConcreteIterator<Item>(*this);
}

#endif