#ifndef IMPLEMENTOR_HPP
#define IMPLEMENTOR_HPP

class Implementor {
public:
    Implementor();

    virtual void OperationImp1() = 0;
    virtual void OperationImp2() = 0;
};
#endif
