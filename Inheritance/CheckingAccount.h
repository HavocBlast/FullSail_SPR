//
// Created by JacobKruse on 6/14/2024.
//

#ifndef INHERITANCE_CHECKINGACCOUNT_H
#define INHERITANCE_CHECKINGACCOUNT_H


#include "BaseAccount.h"



class CheckingAccount : public BaseAccount{
public:
    CheckingAccount();
    CheckingAccount(float initialAmount);
    ~CheckingAccount();

    void Withdraw(float amount) override;

};


#endif//INHERITANCE_CHECKINGACCOUNT_H
