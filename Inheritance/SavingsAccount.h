//
// Created by JacobKruse on 6/14/2024.
//

#ifndef INHERITANCE_SAVINGSACCOUNT_H
#define INHERITANCE_SAVINGSACCOUNT_H


#include "BaseAccount.h"
class SavingsAccount : public BaseAccount{

    void Withdraw(float amount) override;

public:
    SavingsAccount();
    SavingsAccount(float initialBalance);
};


#endif//INHERITANCE_SAVINGSACCOUNT_H
