//
// Created by JacobKruse on 6/14/2024.
//

#ifndef INHERITANCE_BASEACCOUNT_H
#define INHERITANCE_BASEACCOUNT_H
#include <iostream>

class BaseAccount {
public:
    BaseAccount();
    BaseAccount(float initialBalance);
    virtual void Withdraw(float amount);
    virtual void Deposit(float amount);
    float GetBalance() const;

protected:
    float accountBalance{}{};
    int withdrawCount{}{};
};


#endif//INHERITANCE_BASEACCOUNT_H
