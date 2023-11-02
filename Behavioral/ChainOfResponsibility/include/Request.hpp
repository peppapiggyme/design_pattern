#ifndef REQUEST_HPP
#define REQUEST_HPP

enum class RequestType {
    A,
    B,
    C,
};

class Request {
public:
    explicit Request(RequestType type);

    inline RequestType GetType() const { return m_type; }
    inline void        Foo() const {}
    inline void        Bar() const {}

private:
    RequestType m_type;
};
#endif
