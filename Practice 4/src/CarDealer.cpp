//
// Created by ilia on 10.12.22.
//

#include "../Include/CarDealer.hpp"

CarDealer::CarDealer() {
    cars = new std::vector<Car *>;
}

void CarDealer::purchaseCar(Car *c) {
    cars->push_back(c);
}

void CarDealer::sellCar(int position) {
    auto buffer = cars->at(position);
    cars->erase(cars->begin() + position);
    delete buffer;
}

CarDealer::~CarDealer() {
    for (auto iter = cars->begin(); iter != cars->end(); iter++) {
        delete *iter;
    }
    delete cars;
}

void CarDealer::print() {
    std::cout << "This car dealer has:\n";
    for (auto iter = cars->begin(); iter != cars->end(); iter++) {
        std::cout << (*iter)->toString() << "\n";
    }
    std::cout << "______________________________________\n";
}
