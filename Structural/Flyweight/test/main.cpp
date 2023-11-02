#include "Client.hpp"

#include <memory>

int main()
{
    auto client = std::make_unique<Client>();
    client->Execute();

    return 0;
}
