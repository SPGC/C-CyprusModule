#ifndef PRACTICES_CARDEALER_HPP
#define PRACTICES_CARDEALER_HPP

#include <vector>

#include "Car.hpp"


class CarDealer {
private:
    std::vector<Car *> *cars;

public:
    CarDealer();

    void purchaseCar(Car *c);

    void sellCar(int position);

    ~CarDealer();

    void print();
};


#endif //PRACTICES_CARDEALER_HPP
