#ifndef MEMENTO_HPP
#define MEMENTO_HPP

class Originator;

class Memento {
private:
    friend class Originator;
    explicit Memento(int s);
    int  GetState() const;
    void SetState(int s);

private:
    int m_state;
};
#endif
