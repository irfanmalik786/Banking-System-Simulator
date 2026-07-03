#include "Account.h"
#include <iostream>
using namespace std;

// Constructor: Initializes a new bank account with account details
Account::Account(int a, string n, int p, double b) {

    accNo = a;
    name = n;

    // Store a valid 4-digit PIN
    if (p >= 1000 && p <= 9999)
        pin = p;
    else {
        cout << "PIN must be 4 digits!" << endl;
        pin = 0000;
    }

    // Initialize account balance
    if (b >= 0)
        balance = b;
    else
        balance = 0;

    // Initialize account security information
    wrongAttempts = 0;
    locked = false;
}

// Destructor
Account::~Account() {

}


// Return the account number
int Account::getAccNo() const {
    return accNo;
}

double Account::getBalance() const {
    return balance;
}

bool Account::isLocked() const {
    return locked;
}


void Account::setName(const string& n) {
    name = n;
}

// Update the account PIN after validation
void Account::setPin(int p) {

    if (p >= 1000 && p <= 9999)
        pin = p;
    else
        cout << "PIN must be 4 digits!" << endl;
}

void Account::setBalance(double b) {
    if (b >= 0)
        balance = b;
}


bool Account::unlockWithPin(int p) {
    if (pin == p) {
        locked = false;
        wrongAttempts = 0;
        return true;
    }
    return false;
}



bool Account::verifyPin(int p) {
    if (locked) {
        cout << "Account is LOCKED. Use Modify Account to unlock." << endl;
        return false;
    }

    if (pin == p) {
        wrongAttempts = 0;
        return true;
    }

    wrongAttempts++;
    cout << "Wrong PIN!" << endl;

    if (wrongAttempts >= 3) {
        locked = true;
        cout << "Account LOCKED after 3 wrong attempts!" << endl;
    }

    return false;
}


bool Account::deposit(double amount) {
    if (amount <= 0) {
        cout << "Invalid deposit amount!" << endl;
        return false;
    }

    balance += amount;
    return true;
}


bool Account::withdraw(double amount) {
    if (amount <= 0) {
        cout << "Invalid withdraw amount!" << endl;
        return false;
    }

    if (amount > balance) {
        cout << "Insufficient balance!" << endl;
        return false;
    }

    balance -= amount;
    return true;
}


void Account::display() const {
    cout << "Account No : " << accNo << endl;
    cout << "Name       : " << name << endl;
    cout << "Balance    : " << balance << endl;
    cout << "Status     : ";
    if (locked) {
        cout << "LOCKED" << endl;
    }
    else {
        cout << "ACTIVE" << endl;
    }

}
