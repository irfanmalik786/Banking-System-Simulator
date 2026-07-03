#pragma once
#include "SavingsAccount.h"
#include "CurrentAccount.h"

class Bank {
private:
    Account* accounts[50];
    int total;

    int findAccount(int);
    int readInt();       
    double readDouble(); 
    bool isValidName(const string&);

public:
    Bank();
    ~Bank();

    void createAccount();
    void showAll();
    void searchAccount();
    void depositMoney();
    void withdrawMoney();
    void balanceInquiry();
    void modifyAccount();
    void accountStatusCheck();
};
