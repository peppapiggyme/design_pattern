#ifndef FLYWEIGHT_HPP
#define FLYWEIGHT_HPP

class Flyweight {
public:
    virtual ~Flyweight() {}
    virtual void Operation(int extrinsic_state) = 0;
};
#endif
