#ifndef SUBJECT_HPP
#define SUBJECT_HPP

class Subject {
public:
    Subject() noexcept;
    virtual ~Subject() noexcept;

    virtual void Request() noexcept = 0;
};
#endif
