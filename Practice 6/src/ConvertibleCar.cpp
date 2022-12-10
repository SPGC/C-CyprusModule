#include "../include/ConvertibleCar.hpp"


int ConvertibleCar::getSeatsAmount() {
    return seatsAmount;
}

bool ConvertibleCar::isOpenHood() {
    return openHood;
}

void ConvertibleCar::setSeatsAmount(int seatsAmount) {
    this->seatsAmount = seatsAmount;
}

void ConvertibleCar::setHood(bool hood) {
    openHood = hood;
}

ConvertibleCar::ConvertibleCar(std::string brand, std::string model, int hp, int seatsAmount, bool openHood) : Car(
        brand, model, hp) {
    this->seatsAmount = seatsAmount;
    this->openHood = openHood;
}

ConvertibleCar::ConvertibleCar(std::string brand, std::string model, int hp, int seatsAmount) : Car(brand, model, hp) {
    openHood = false;
    this->seatsAmount = seatsAmount;
}

std::string ConvertibleCar::toString() {
    if (openHood) {
        return "[" + this->Car::getBrand() + ", " + this->getModel() + ", " + std::to_string(this->getHp()) + " with " +
               std::to_string(seatsAmount) + " seats and opened hood]";
    }
    return "[" + this->Car::getBrand() + ", " + this->getModel() + ", " + std::to_string(this->getHp()) + " with " +
           std::to_string(seatsAmount) + " seats and closed hood]";
}