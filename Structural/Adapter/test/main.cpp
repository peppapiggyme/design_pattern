
#include "Adapter.hpp"
#include "Client.hpp"

#include <memory>

int main() {
    auto adapter = std::make_unique<Adapter>();
    auto client  = std::make_unique<Client>();

    client->Execute(adapter.get());

    return 0;
}
