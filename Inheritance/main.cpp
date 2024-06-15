#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include <crtdbg.h>

#define MEMORY_LEAK_Line-1
int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(MEMORY_LEAK_LINE);
    // Initialize Accounts
    CheckingAccount* checkingAccount_ptr = new CheckingAccount(4000.0F);
    SavingsAccount* savingsAccount_ptr = new SavingsAccount(2500.0F);

    // Memory Cleanup
    delete checkingAccount_ptr;
}
