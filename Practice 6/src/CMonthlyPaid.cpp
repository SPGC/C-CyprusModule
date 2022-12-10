#include "../include/CMonthlyPaid.hpp"


CMonthlyPaid::CMonthlyPaid(std::string name, int id, float salary) : CPayRoll(name, id) {
    mSalary = salary;
}

void CMonthlyPaid::setSalary(float salary) {
    mSalary = salary;
}

float CMonthlyPaid::pay() {
    return mSalary / 12.0f;
}
