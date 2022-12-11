#include "../include/CDepositAccount.hpp"


void CDepositAccount::Withdrawal(float amount){
    if(CAccount::GetBalance()-abs(amount) >= LIMIT){
        CAccount::ChangeBalance(-abs(amount));
        return;
    }
    std::cout << "Can't withdraw. You will run out of money ";
};
void CDepositAccount::Interest(){
    if(CAccount::GetBalance() > 0){
        CAccount::ChangeBalance(abs(CAccount::GetBalance())*CASH_BACK);
    }
}