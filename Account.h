#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    int pin;
    double balance;
    int wrongAttempts;
    bool locked;

public:
    Account(int = 0, string = "", int = 0, double = 0);
    virtual ~Account();


    int getAccNo() const;
    double getBalance() const;
    bool isLocked() const;
    bool unlockWithPin(int p);

    void setName(const string&);
    void setPin(int);
    void setBalance(double);

    bool verifyPin(int);

    virtual bool deposit(double);
    virtual bool withdraw(double);

    virtual void display() const;
};
