#include "../include/CAccount.hpp"


void CAccount::Deposit( float amount ){
    if(amount < 0){
        std::cout << "Can't deposit negative amount";
        return;
    }
    mBalance+=amount;
}
void CAccount::ChangeBalance( float amount ){
    mBalance+=amount;
}
float CAccount::GetBalance( ){
    return mBalance;
}