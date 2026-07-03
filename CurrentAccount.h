#pragma once
#include "Account.h"

class CurrentAccount : public Account {
public:
    CurrentAccount(int, string, int, double);
    void display() const override;
};
