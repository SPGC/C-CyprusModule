
#ifndef PRACTICES_F1CAR_HPP
#define PRACTICES_F1CAR_HPP

#include "Car.hpp"


class F1Car : public Car {
private:
    std::string driver;
public:
    std::string getDriver();

    void setDriver(std::string driver);

    F1Car(std::string brand, std::string model, int hp, std::string driver);

    std::string toString() override;
};


#endif //PRACTICES_F1CAR_HPP
