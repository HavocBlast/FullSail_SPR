//
// Created by JacobKruse on 6/14/2024.
//

#include "CreditAccount.h"


void CreditAccount::Withdraw(float amount) {
    BaseAccount::Withdraw(amount);
    if(amountSpent > 40){
        CreditAccount::Withdraw(5000);
        std::cout << "You have spent "
                  << amountSpent - 40
                  << " over your limit of $"
                  << 40
                  << ". and you have been charged an overlimit fee of $5000"
                  << std::endl;
    }
}
