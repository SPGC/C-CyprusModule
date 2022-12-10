#ifndef PRACTICES_TRUCK_HPP
#define PRACTICES_TRUCK_HPP

#include "Car.hpp"


class Truck : public Car {
private:
    int wheels;
public:
    Truck(std::string model, std::string brand, int hp, int wheels);

    std::string toString();

    int getWheels();

    void setWheels(int wheels);
};


#endif //PRACTICES_TRUCK_HPP
