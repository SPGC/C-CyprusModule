#ifndef PRACTICES_CCURENTACCOUNT_HPP
#define PRACTICES_CCURENTACCOUNT_HPP

#include <iostream>

#include "CAccount.hpp"


class CCurrentAccount : public CAccount {
private:
    static const int LIMIT = -5000;
    static constexpr double PENNY = 0.05;
public:
    void Withdrawal(float amount) override;
    void Interest() override;
};


#endif //PRACTICES_CCURENTACCOUNT_HPP
