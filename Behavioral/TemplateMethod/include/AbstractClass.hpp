#ifndef ABSTRACTCLASS_HPP
#define ABSTRACTCLASS_HPP

class AbstractClass {
public:
    void TemplateMethod();

private:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
};
#endif
