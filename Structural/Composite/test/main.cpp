#include "Client.hpp"
#include "Composite.hpp"
#include "LeafA.hpp"
#include "LeafB.hpp"
#include "LeafC.hpp"

#include <memory>

int main() {
    auto client    = std::make_unique<Client>();
    auto composite = std::make_unique<Composite>();
    auto a = std::make_shared<LeafA>();
    auto b = std::make_shared<LeafB>();
    auto c = std::make_shared<LeafC>();
    auto to_delete = std::make_shared<LeafC>();
    
    composite->Add(to_delete.get());
    composite->Add(a.get());
    composite->Add(b.get());
    composite->Add(c.get());
    composite->Remove(composite->GetChild(0));

    client->Execute(composite.get());

    return 0;
}
