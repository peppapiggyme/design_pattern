#ifndef VISITOR_HPP
#define VISITOR_HPP

class ConcreteElementA;
class ConcreteElementB;

class Visitor {
public:
    virtual void VisitConcreteElementA(const ConcreteElementA* a) const = 0;
    virtual void VisitConcreteElementB(const ConcreteElementB* b) const = 0;
};
#endif
