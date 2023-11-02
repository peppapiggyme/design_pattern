#ifndef COMPONENT_HPP
#define COMPONENT_HPP

class Component {
public:
    Component();

    virtual void Operation() = 0;

private:
    virtual void       Add(Component* comp) { (void) comp; };
    virtual void       Remove(Component* comp) { (void) comp; };
    virtual Component* GetChild(int i) const {
        (void) i;
        return nullptr;
    };
};
#endif
