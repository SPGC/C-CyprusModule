
#ifndef PRACTICES_EMPLOYEE_HPP
#define PRACTICES_EMPLOYEE_HPP

#include <iostream>

#include "CMonthlyPaid.hpp"
#include "CHourlyPaid.hpp"


enum TypeOfPayment {
    hourly,
    monthly
};

class Employee : public CMonthlyPaid, CHourlyPaid {
private:
    TypeOfPayment typeOfPayment;
public:
    Employee(std::string name, int id);

    Employee(std::string name, int id, float salary);

    void pay();

    std::string getName();

    int getId();
};


#endif //PRACTICES_EMPLOYEE_HPP
