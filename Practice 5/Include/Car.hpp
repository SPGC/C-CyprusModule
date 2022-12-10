#ifndef PRACTICES_CAR_HPP
#define PRACTICES_CAR_HPP

#include <string>
#include <iostream>


class Car {
private:
    std::string brand;
    std::string model;
    int hp;

public:
    std::string getBrand();
    std::string getModel();
    int getHp();
    void setBrand(std::string brand);
    void setModel(std::string model);
    void setHp(int hp);
    std::string toString();
    Car();
    Car(std::string brand, std::string model, int hp);
    Car(std::string brand, std::string model);
    // No need for destructor
};


#endif //PRACTICES_CAR_HPP
