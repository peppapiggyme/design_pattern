#include "Client.hpp"

Client::Client() {}

void Client::Execute(Component* component) const { component->Operation(); }
