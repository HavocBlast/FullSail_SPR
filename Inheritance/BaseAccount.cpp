//
// Created by JacobKruse on 6/14/2024.
//

#include "BaseAccount.h"

BaseAccount::BaseAccount() {
    accountBalance = 0;
    withdrawCount = 0;
}
BaseAccount::BaseAccount(float initialBalance)
{
    accountBalance = initialBalance;
    withdrawCount = 0;
}

void BaseAccount::Withdraw(float amount) {
    accountBalance -= amount;
    withdrawCount++;
    std::cout << "$" << amount << " was withdrawn from your account." << std::endl;
}
void BaseAccount::Deposit(float amount) {
    accountBalance += amount;
    std::cout << "$" << amount << " was added to your account." << std::endl;
}
float BaseAccount::GetBalance() const {
    return accountBalance;
}
