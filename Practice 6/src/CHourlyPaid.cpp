#include "../include/CHourlyPaid.hpp"


CHourlyPaid::CHourlyPaid(std::string name, int id) : CPayRoll(name, id) {
    mHoursWorked = 160;
    mHourlyRate = 100;
}


void CHourlyPaid::setHoursWorked(float hoursWorked) {
    mHoursWorked = hoursWorked;

}

void CHourlyPaid::setHourlyRate(float hourlyRate) {
    mHourlyRate = hourlyRate;

}

float CHourlyPaid::pay() {
    return mHourlyRate * mHoursWorked;
}