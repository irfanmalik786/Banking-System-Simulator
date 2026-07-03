#pragma once
#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(int, string, int, double);
    void display() const override;
};
