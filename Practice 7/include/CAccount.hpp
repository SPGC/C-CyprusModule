#ifndef PRACTICES_CACCOUNT_HPP
#define PRACTICES_CACCOUNT_HPP

#include <iostream>

#include <math.h>


class CAccount {
private:
    float mBalance;
public:
    void Deposit(float amount);

    void ChangeBalance(float amount);

    float GetBalance();

    virtual void Withdrawal(float amount) = 0;

    virtual void Interest() = 0;

    virtual ~CAccount() = default;
};


#endif //PRACTICES_CACCOUNT_HPP
