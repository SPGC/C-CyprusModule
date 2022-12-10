#ifndef PRACTICES_CCOUNTER_HPP
#define PRACTICES_CCOUNTER_HPP

#include <iostream>


class CCounter {
private:
    int mAmount; // stores the current count value
    int top;
public:
    void set(int number); // set count to the value of number
    int get();

    void saveDataAndReset();
    void rainy();
    void decrement();
    void increment();
    CCounter();
    CCounter(int amount);
// get the current value of amount
// increment count by 1 (trivial)
};
#endif //PRACTICES_CCOUNTER_HPP
