#include "Abstraction.hpp"

Abstraction::Abstraction(Implementor* impl) : m_impl(impl) {}

void Abstraction::Operation1() { m_impl->OperationImp1(); }

void Abstraction::Operation2() { m_impl->OperationImp2(); }