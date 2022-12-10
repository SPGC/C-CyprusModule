
#ifndef PRACTICES_CONVERTIBLECAR_HPP
#define PRACTICES_CONVERTIBLECAR_HPP

#include "Car.hpp"


class ConvertibleCar : public Car {
private:
    int seatsAmount;
    bool openHood;
public:
    int getSeatsAmount();

    bool isOpenHood();

    void setSeatsAmount(int seatsAmount);

    void setHood(bool hood);

    ConvertibleCar(std::string brand, std::string model, int hp, int seatsAmount, bool openHood);

    ConvertibleCar(std::string brand, std::string model, int hp, int seatsAmount);

    std::string toString();
};


#endif //PRACTICES_CONVERTIBLECAR_HPP
