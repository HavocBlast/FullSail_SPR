//
// Created by JacobKruse on 6/14/2024.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount() {
    accountBalance = 0.0F;
}

CheckingAccount::CheckingAccount(float initialAmount) : BaseAccount(initialAmount) {
    accountBalance = initialAmount;
}

CheckingAccount::~CheckingAccount() {
}

void CheckingAccount::Withdraw(float amount) {
    BaseAccount::Withdraw(amount);
    if (withdrawCount > 10) {
        BaseAccount::Withdraw(5);
        std::cout << "Your account has "
                  << withdrawCount
                  << " withdrawals which is over the 10 limit and you have been charged $5 fee"
                  << std::endl;
    }
}

