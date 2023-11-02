#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP

#include "Component.hpp"

#include <vector>

class Composite : public Component {
public:
    Composite();

    virtual void       Operation() override;
    virtual void       Add(Component* comp) override;
    virtual void       Remove(Component* comp) override;
    virtual Component* GetChild(int i) const override;

private:
    std::vector<Component*> m_children;
};
#endif
