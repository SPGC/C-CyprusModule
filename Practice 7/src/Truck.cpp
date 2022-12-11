#include "../include/Truck.hpp"

Truck::Truck(std::string model, std::string brand, int hp, int wheels) : Car(brand, model, hp) {
    this->wheels = wheels;
}

std::string Truck::toString() {
    return "[" + this->Car::getBrand() + ", " + this->getModel() + ", " + std::to_string(this->getHp()) + " with " +
           std::to_string(wheels) + " wheels]";
}

int Truck::getWheels() {
    return wheels;
}

void Truck::setWheels(int wheels) {
    this->wheels = wheels;
}