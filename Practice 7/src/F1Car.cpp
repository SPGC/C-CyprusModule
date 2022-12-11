#include "../include/F1Car.hpp"

std::string F1Car::getDriver() {
    return driver;
}

void F1Car::setDriver(std::string driver) {
    this->driver = driver;
}

F1Car::F1Car(std::string brand, std::string model, int hp, std::string driver) : Car(brand, model, hp) {
    this->driver = driver;
}

std::string F1Car::toString() {
    return "[" + this->Car::getBrand() + ", " + this->getModel() + ", " + std::to_string(this->getHp()) + " with " +
           driver + " as pilot]";
}
