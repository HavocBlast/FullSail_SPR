//
// Created by JacobKruse on 6/14/2024.
//

#ifndef INHERITANCE_CREDITACCOUNT_H
#define INHERITANCE_CREDITACCOUNT_H


#include "BaseAccount.h"

class CreditAccount : public BaseAccount{
public:
    CreditAccount() : amountSpent{0}{};
    void Withdraw(float amount) override;

private:
    int amountSpent;

};


#endif//INHERITANCE_CREDITACCOUNT_H
