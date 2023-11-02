#include "State.hpp"
#include "Context.hpp"

void State::ChangeState(Context* c, State* s) { c->ChangeState(s); }
