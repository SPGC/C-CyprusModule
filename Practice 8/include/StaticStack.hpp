
#ifndef PRACTICES_STATICSTACK_HPP
#define PRACTICES_STATICSTACK_HPP

#include <cstddef>
#include <stdexcept>
#include <iostream>

#include "Stack.hpp"


template<typename T, std::size_t N>
class StaticStack : Stack<T> {
private:
    T data[N];
    int top;

public:
    void push(T element) override {
        if (!StaticStack::isFull()) {
            data[top] = element;
            top++;
        } else {
            throw std::out_of_range("Stack is full");
        }
    }

    void pop(T &element) override {
        if (!isEmpty()) {
            element = data[top];
            top--;
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }

    bool isEmpty() override {
        return top == 0;
    }

    void initialiseStack() override {
        top = 0;
    }

    void displayStack() override {
        for (int i = 0; i < top; i++) {
            std::cout << data[i] << ", ";
        }
        std::cout << "\n";
    }

    bool isFull() {
        return N == top;
    }

    T front() override {
        if (!isEmpty()) {
            return data[top];
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }
};


#endif //PRACTICES_STATICSTACK_HPP
