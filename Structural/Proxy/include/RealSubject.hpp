#ifndef REALSUBJECT_HPP
#define REALSUBJECT_HPP

#include "Subject.hpp"

class RealSubject : public Subject {
public:
    RealSubject() noexcept;
    virtual ~RealSubject() noexcept;

    virtual void Request() noexcept override;
};
#endif
