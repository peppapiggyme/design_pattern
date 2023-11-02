#include "SubsystemCreator.hpp"

SubsystemCreator::SubsystemCreator() {}

SubsystemClassA* SubsystemCreator::MakeClassA() { return new SubsystemClassA; }
SubsystemClassB* SubsystemCreator::MakeClassB() { return new SubsystemClassB; }
SubsystemClassC* SubsystemCreator::MakeClassC() { return new SubsystemClassC; }
