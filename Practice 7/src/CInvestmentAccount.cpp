#include "../include/CInvestmentAccount.hpp"


void CInvestmentAccount::Withdrawal(float amount) {
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    if (now->tm_year + 1900 - this->year > 1) {
        CDepositAccount::Withdrawal(amount);
        return;
    }
    std::cout << "Can't withdraw. You can withdraw only after two years ";
}

void CInvestmentAccount::Interest() {
    if (CAccount::GetBalance() > 0) {
        CAccount::ChangeBalance(abs(CAccount::GetBalance()) * CASH_BACK);
    }
}

CInvestmentAccount::CInvestmentAccount(int year) : CDepositAccount() {
    this->year = year;
}