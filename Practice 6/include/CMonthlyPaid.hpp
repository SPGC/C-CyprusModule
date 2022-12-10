
#ifndef PRACTICES_CMONTHLYPAID_HPP
#define PRACTICES_CMONTHLYPAID_HPP

#include "CPayRoll.hpp"


class CMonthlyPaid : public CPayRoll {
private:
    float mSalary;

public:
    CMonthlyPaid(std::string name, int id, float salary);

    void setSalary(float salary);

    float pay();
};


#endif //PRACTICES_CMONTHLYPAID_HPP
