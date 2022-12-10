
#ifndef PRACTICES_CHOURLYPAID_HPP
#define PRACTICES_CHOURLYPAID_HPP

#include "CPayRoll.hpp"


class CHourlyPaid : public CPayRoll {
private:
    double mHoursWorked;
    double mHourlyRate;

public:
    CHourlyPaid(std::string name, int id);

    void setHoursWorked(float hoursWorked);

    void setHourlyRate(float hourlyRate);

    float pay();
};


#endif //PRACTICES_CHOURLYPAID_HPP
