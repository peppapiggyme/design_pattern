# Design Patterns

[![CMake](https://github.com/peppapiggyme/design_pattern/actions/workflows/cmake.yml/badge.svg)](https://github.com/peppapiggyme/design_pattern/actions/workflows/cmake.yml)

Minimal modern C++ implementation of design patterns in the book *Design Patterns: Elements of Reusable Object-Oriented Software>*

Author: [PPM](bowen.zhang23@outlook.com)

## Usage

### Set-up

```bash
source setup.sh
```

### Create a new class

```bash
create_class.py /path/to/dir/ ClassName
```

> see also `create_class.py -h`

### Testing with ctest

```bash
# in `build` folder
ctest -C Debug -VV
```

## Creational

### Abstract Factory

### Builder

### Factory Method

Template `ConcreteCreator`.

```cpp
template <class ProductType>
class ConcreteCreator : public Creator {
public:
    ConcreteCreator();
    virtual Product* MakeProduct() override;
};
```

### Prototype

### Singleton

Generic `Singleton`.

```cpp
template <typename Type, typename... Args>
class Singleton;
using MyClassSingleton = Singleton<MyClass, int, int>;
MyClassSingleton::Instance(800, 600);
```

## Structural

### Adapter

Class Adapter

```cpp
class Adapter : public Target, private Adaptee
```

### Bridge

### Composite

### Decorator

### Façade

Singleton `Façade`. High-level interface.

```cpp
Facade& Facade::Instance() noexcept {
    static Facade instance;
    return instance;
}
```

### Flyweight

### Proxy

## Behavioral

### Chain of Responsibility

### Command

No `undo` or `redo`. FIFO.

### Interpreter

### Iterator

ConcreteAggregate is `List`; A fixed-capacity stack.

```cpp
template <class Item>
class ConcreteAggregate : public Aggregate<Item> {
public:
    // ...
    void        Push(Item item) noexcept;
    void        Pop() noexcept;
    Item        Top() const;
    // ...
private:
    std::array<Item, MAX_CAPACITY> m_data;
};
```

### Mediator

Manual connection to mediator

```cpp
class Colleague {
public:
    virtual void Changed();
    virtual void ConnectTo(Mediator* mediator);
    // ...
};
```

### Memento

### Observer

### State

`State` is friend class of `Context`.

### Strategy

### Template Method

### Visitor
