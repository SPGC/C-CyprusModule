#include "../Include/CPayRoll.hpp"

CPayRoll::CPayRoll(std::string name, int id) {
    mpEmployeeDetails = new SEmployee();
    mpEmployeeDetails->name = name;
    mpEmployeeDetails->id = id;
}

CPayRoll::~CPayRoll() {
    delete this->mpEmployeeDetails;
}

void CPayRoll::SetDetails(std::string name, int id){
    mpEmployeeDetails->name = name;
    mpEmployeeDetails->id = id;
}

void CPayRoll::GetDetails(std::string &name, int &id){
    name = mpEmployeeDetails->name;
    id = mpEmployeeDetails->id;
}