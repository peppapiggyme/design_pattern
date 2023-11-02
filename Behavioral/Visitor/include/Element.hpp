#ifndef ELEMENT_HPP
#define ELEMENT_HPP

class Visitor;

class Element {
public:
    virtual void Accept(Visitor* v) const = 0;
};
#endif
