#include "Bank.h"
#include <iostream>
using namespace std;

Bank::Bank() {
    total = 0;
}

Bank::~Bank() {
    for (int i = 0; i < total; i++) {
        delete accounts[i];
    }
}

int Bank::readInt() {
    int x;
    while (!(cin >> x)) {
        cout << "Enter numeric value: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return x;
}

double Bank::readDouble() {
    double x;
    while (!(cin >> x)) {
        cout << "Enter numeric value: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return x;
}

bool Bank::isValidName(const string& name) {
    for (int i = 0; i < name.length(); i++) {
        if (!((name[i] >= 'A' && name[i] <= 'Z') ||
            (name[i] >= 'a' && name[i] <= 'z'))) {
            return false;
        }
    }
    return true;
}

int Bank::findAccount(int acc) {
    for (int i = 0; i < total; i++) {
        if (accounts[i]->getAccNo() == acc)
            return i;
    }
    return -1;
}

void Bank::createAccount() {
    cout << "Enter Account Number: ";
    int acc = readInt();

    if (findAccount(acc) != -1) {
        cout << "Account already exists!" << endl;
        return;
    }

    string name;
    do {
        cout << "Enter Name (alphabets only): ";
        cin >> name;
        if (!isValidName(name))
            cout << "Invalid name! Use alphabets only." << endl;
    } while (!isValidName(name));

    int pin;
    do {
        cout << "Set PIN (4 digits): ";
        pin = readInt();
        if (pin < 1000 || pin > 9999)
            cout << "Invalid PIN! PIN must be 4 digits." << endl;
    } while (pin < 1000 || pin > 9999);

    cout << "Enter Initial Balance: ";
    double bal = readDouble();

    int type;
    do {
        cout << "1. Savings Account" << endl;
        cout << "2. Current Account" << endl;
        cout << "Choice: ";
        type = readInt();
        if (type != 1 && type != 2)
            cout << "Invalid account type! Enter 1 or 2 only." << endl;
    } while (type != 1 && type != 2);

    if (type == 1)
        accounts[total] = new SavingsAccount(acc, name, pin, bal);
    else
        accounts[total] = new CurrentAccount(acc, name, pin, bal);

    total++;
    cout << "Account Created Successfully!" << endl;
}

void Bank::showAll() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    for (int i = 0; i < total; i++) {
        cout << endl;
        accounts[i]->display();
    }
}

void Bank::searchAccount() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    accounts[i]->display();
}

void Bank::depositMoney() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    cout << "Enter PIN: ";
    int pin = readInt();
    if (!accounts[i]->verifyPin(pin)) {
        cout << "Deposit Unsuccessful!" << endl;
        return;
    }

    cout << "Enter Amount to Deposit: ";
    double amt = readDouble();

    if (accounts[i]->deposit(amt)) {
        cout << "Deposit Successful!" << endl;
        cout << "New Balance: " << accounts[i]->getBalance() << endl;
    }
    else {
        cout << "Deposit Unsuccessful!" << endl;
    }
}

void Bank::withdrawMoney() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    cout << "Enter PIN: ";
    int pin = readInt();
    if (!accounts[i]->verifyPin(pin)) {
        cout << "Withdrawal Unsuccessful!" << endl;
        return;
    }

    cout << "Enter Amount to Withdraw: ";
    double amt = readDouble();

    if (accounts[i]->withdraw(amt)) {
        cout << "Withdrawal Successful!" << endl;
        cout << "New Balance: " << accounts[i]->getBalance() << endl;
    }
    else {
        cout << "Withdrawal Unsuccessful!" << endl;
    }
}

void Bank::balanceInquiry() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    cout << "Enter PIN: ";
    int pin = readInt();
    if (!accounts[i]->verifyPin(pin))
        return;

    cout << "Current Balance: " << accounts[i]->getBalance() << endl;
}

void Bank::modifyAccount() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    if (accounts[i]->isLocked()) {
        int pin;
        do {
            cout << "Enter PIN to unlock: ";
            pin = readInt();
            if (!accounts[i]->unlockWithPin(pin))
                cout << "Incorrect PIN. Try again." << endl;
        } while (!accounts[i]->unlockWithPin(pin));
    }
    else {
        cout << "Enter PIN: ";
        int pin = readInt();
        if (!accounts[i]->verifyPin(pin)) return;
    }

    string n;
    do {
        cout << "Enter New Name (alphabets only): ";
        cin >> n;
        if (!isValidName(n))
            cout << "Invalid name! Use alphabets only." << endl;
    } while (!isValidName(n));

    int p;
    do {
        cout << "Enter New PIN (4 digits): ";
        p = readInt();
        if (p < 1000 || p > 9999)
            cout << "Invalid PIN! PIN must be 4 digits." << endl;
    } while (p < 1000 || p > 9999);

    cout << "Enter New Balance: ";
    double b = readDouble();

    accounts[i]->setName(n);
    accounts[i]->setPin(p);
    accounts[i]->setBalance(b);

    cout << "Account Modified Successfully!" << endl;
}

void Bank::accountStatusCheck() {
    if (total == 0) {
        cout << "No account exists!" << endl;
        return;
    }

    cout << "Enter Account Number: ";
    int acc = readInt();

    int i = findAccount(acc);
    if (i == -1) {
        cout << "Account does not exist!" << endl;
        return;
    }

    cout << "Account Status: ";
    if (accounts[i]->isLocked())
        cout << "LOCKED" << endl;
    else
        cout << "ACTIVE" << endl;
}
