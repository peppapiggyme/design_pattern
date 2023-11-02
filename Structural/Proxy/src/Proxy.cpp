#include "Proxy.hpp"

#include <iostream>

Proxy::Proxy() noexcept {}

Proxy::~Proxy() noexcept {
    if (m_realsubject) {
        delete m_realsubject;
        m_realsubject = nullptr;
    }
}

void Proxy::Request() noexcept {
    if (!m_realsubject) {
        std::cout << "RealSubject managed by Proxy ..\n";
        m_realsubject = new RealSubject;
    }
    ++m_count;
    m_realsubject->Request();
    std::cout << "Count = " << GetCount() << " ..\n";
}

int Proxy::GetCount() const noexcept { return m_count; }
