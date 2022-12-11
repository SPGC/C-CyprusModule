#ifndef PRACTICES_CINVESTMENTACCOUNT_HPP
#define PRACTICES_CINVESTMENTACCOUNT_HPP

#include <ctime>

#include "CDepositAccount.hpp"


class CInvestmentAccount : public CDepositAccount {
private:
    int year;
    static constexpr double CASH_BACK = 0.08;
public:
    void Withdrawal(float amount) override;
    void Interest() override;
    explicit CInvestmentAccount(int year);
};


#endif //PRACTICES_CINVESTMENTACCOUNT_HPP
