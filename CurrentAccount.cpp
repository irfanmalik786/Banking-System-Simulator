#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(int a, string n, int p, double b)
    : Account(a, n, p, b) {
}

void CurrentAccount::display() const {
    cout << "[Current Account]" << endl;
    Account::display();
}
