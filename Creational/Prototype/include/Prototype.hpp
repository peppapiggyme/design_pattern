#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

class Prototype {
public:
    Prototype();
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;
};
#endif
