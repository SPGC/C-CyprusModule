#include <iostream>

#include "../Include/CCounter.hpp"
#include "../Include/CarDealer.hpp"
#include "../Include/Student.hpp"

using namespace std;

int main() {
    auto carDealer = CarDealer();
    for (int i = 0; i < 5; ++i) {
        carDealer.purchaseCar(new Car("Audi", "Q" + to_string(i), 500 + i * 25));
    }
    carDealer.print();
    carDealer.sellCar(2);
    carDealer.print();

    auto counter = CCounter();
    counter.increment();
    cout << counter.get() << "\n";
    counter.saveDataAndReset();
    counter.rainy();
    cout << counter.get() << "\n";
    counter.decrement();
    cout << counter.get() << "\n";
    auto definitelyNotBob = Student("Bob the builder", 23.9);
    auto bob = Student();
    bob.printStudent();
    definitelyNotBob.printStudent();
    
//    system("pause"); This doesn't work on Linux. PLS STOP!
}