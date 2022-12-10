#include "../Include/CCounter.hpp"


// Set counter to the value of number
void CCounter::set(int number) {
    mAmount = number;
}

// Get the current value of the counter
int CCounter::get() {
    return mAmount;
}

// Increment the counter by 1 (trivial)
void CCounter::increment() {
    mAmount++;
}

void CCounter::decrement() {
    mAmount--;
}

void CCounter::saveDataAndReset() {
    top = mAmount;
    mAmount = 0;
}

void CCounter::rainy() {
    mAmount++;
    std::cout << "The rain in Spain\n";
}

CCounter::CCounter() {
    mAmount = 0;
}

CCounter::CCounter(int amount) {
    mAmount = amount;
}
