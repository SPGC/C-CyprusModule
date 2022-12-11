#include "../include/CCurrentAccount.hpp"


void CCurrentAccount::Withdrawal(float amount){
    if(CAccount::GetBalance()-abs(amount) >= LIMIT){
        CAccount::ChangeBalance(-abs(amount));
        return;
    }
    std::cout << "Can't withdraw. You will exceed the limit ";
}
void CCurrentAccount::Interest(){
    if(CAccount::GetBalance() < 0){
        CAccount::ChangeBalance(-abs(CAccount::GetBalance())*PENNY);
    }
}