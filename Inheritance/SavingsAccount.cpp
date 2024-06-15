//
// Created by JacobKruse on 6/14/2024.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(float initialBalance) : BaseAccount(initialBalance) {
}

SavingsAccount::SavingsAccount() : BaseAccount() {
    accountBalance = 0;
}

void SavingsAccount::Withdraw(float amount) {
    if(withdrawCount > 3){
        std::cout << "Your account has already had 3 withdrawals allowed by law." << std::endl;
    }
    else{
        BaseAccount::Withdraw(amount);
    }
}

