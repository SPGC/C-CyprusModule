
#ifndef PRACTICES_STACK_HPP
#define PRACTICES_STACK_HPP

template<typename T>
class Stack {
public:
    virtual void push(T element) = 0;
    virtual void pop(T &) = 0;
    virtual bool isEmpty() = 0;
    virtual void initialiseStack() = 0;
    virtual void displayStack() = 0;
    virtual T front() = 0;
};


#endif //PRACTICES_STACK_HPP
