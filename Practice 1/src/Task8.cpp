#include <iostream>
#include <string>


using namespace std;

typedef struct _car {
    string colour;
    string make;
    float mileage;
    int doors;
} Car;

void printCar(Car &car) {
    cout << "Car with values:\n colour: " << car.colour << "\n make: " << car.make << "\n mileage: " << car.mileage
         << "\n doors: " << car.doors << "\n";
}

int main() {
    Car car;
    car.doors = 4;
    car.mileage = 100;
    car.make = "Brrrrr";
    car.colour = "Black";
    printCar(car);
    return 1;
}