#include "../include/Car.hpp"


std::string Car::getBrand() {
    return brand;
}

std::string Car::getModel() {
    return model;
}

int Car::getHp() {
    return hp;
}

void Car::setBrand(std::string brand) {
    this->brand = brand;
}

void Car::setModel(std::string model) {
    this->model = model;
}

void Car::setHp(int hp) {
    this->hp = hp;
}

std::string Car::toString() {
    return "[" + brand + ", " + model + ", " + std::to_string(hp) + "]";
}

Car::Car(std::string brand, std::string model, int hp) {
    this->model = model;
    this->brand = brand;
    this->hp = hp;
}

Car::Car() {
    model = "Audi";
    brand = "Q5";
    hp = 500;
}

Car::Car(std::string brand, std::string model) {
    this->model = model;
    this->brand = brand;
    this->hp = 1600;
}