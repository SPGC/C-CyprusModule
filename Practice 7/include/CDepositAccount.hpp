#ifndef PRACTICES_CDEPOSITACCOUNT_HPP
#define PRACTICES_CDEPOSITACCOUNT_HPP

#include "CAccount.hpp"


class CDepositAccount : public CAccount {
protected:
    static const int LIMIT = 0;
    static constexpr double CASH_BACK = 0.03;
public:
    void Withdrawal(float amount) override;
    void Interest() override;
};



#endif //PRACTICES_CDEPOSITACCOUNT_HPP
