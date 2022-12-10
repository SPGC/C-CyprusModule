#include "../include/Employee.hpp"


Employee::Employee(std::string name, int id) : CHourlyPaid(name, id), CMonthlyPaid(name, id, 0) {
    typeOfPayment = hourly;
}

Employee::Employee(std::string name, int id, float salary) : CHourlyPaid(name, id), CMonthlyPaid(name, id, salary) {
    typeOfPayment = monthly;
}

void Employee::pay() {
    std::string *name = new std::string;
    int *id = new int;
    this->CMonthlyPaid::GetDetails(*name, *id);
    std::cout << "Employee " << *name << " has ";
    if (typeOfPayment == hourly) {
        std::cout << this->CHourlyPaid::pay();
    } else {
        std::cout << this->CMonthlyPaid::pay();
    }
    std::cout << " per month\n";
    delete id;
    delete name;
}

std::string Employee::getName() {
    std::string *name;
    int *id;
    this->CMonthlyPaid::GetDetails(*name, *id);
    std::string buffer = *name;
    delete id;
    delete name;
    return buffer;
}

int Employee::getId() {
    std::string *name;
    int *id;
    this->CMonthlyPaid::GetDetails(*name, *id);
    int buffer = *id;
    delete id;
    delete name;
    return buffer;
}