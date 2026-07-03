#include <iostream>
#include "Bank.h"
using namespace std;

int readInt() {
    int x;
    while (!(cin >> x)) {
        cout << "Invalid Input \n Enter only numeric value: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return x;
}

int main() {
    Bank bank;
    int choice;

    do {
        cout << endl;
        cout << "===== BANK MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Show All Accounts" << endl;
        cout << "3. Search Account" << endl;
        cout << "4. Deposit Money" << endl;
        cout << "5. Withdraw Money" << endl;
        cout << "6. Balance Inquiry" << endl;
        cout << "7. Modify Account" << endl;
        cout << "8. Account Status Check" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter Choice: ";

        choice = readInt();   

        if (choice == 1)
            bank.createAccount();
        else if (choice == 2)
            bank.showAll();
        else if (choice == 3)
            bank.searchAccount();
        else if (choice == 4)
            bank.depositMoney();
        else if (choice == 5)
            bank.withdrawMoney();
        else if (choice == 6)
            bank.balanceInquiry();
        else if (choice == 7)
            bank.modifyAccount();
        else if (choice == 8)
            bank.accountStatusCheck();
        else if (choice == 9)
            cout << "Thank You!" << endl;
        else
            cout << "Invalid Choice! Enter numeric value only." << endl;

    } while (choice != 9);

    return 0;
}
