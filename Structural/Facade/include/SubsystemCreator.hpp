#ifndef SUBSYSTEMCREATOR_HPP
#define SUBSYSTEMCREATOR_HPP

#include "SubsystemClassA.hpp"
#include "SubsystemClassB.hpp"
#include "SubsystemClassC.hpp"

class SubsystemCreator {
public:
    SubsystemCreator();

    static SubsystemClassA* MakeClassA();
    static SubsystemClassB* MakeClassB();
    static SubsystemClassC* MakeClassC();
};
#endif
