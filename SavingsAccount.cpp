#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int a, string n, int p, double b)
    : Account(a, n, p, b) {
}

void SavingsAccount::display() const {
    cout << "[Savings Account]" << endl;
    Account::display();
}
