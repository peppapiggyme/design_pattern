#ifndef PROXY_HPP
#define PROXY_HPP

#include "RealSubject.hpp"
#include "Subject.hpp"

class Proxy : public Subject {
public:
    Proxy() noexcept;
    virtual ~Proxy() noexcept;

    virtual void Request() noexcept override;
    int          GetCount() const noexcept;

private:
    RealSubject* m_realsubject;
    int          m_count = 0;
};
#endif
