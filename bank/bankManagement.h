#ifndef BANK_MANAGEMENT_H
#define BANK_MANAGEMENT_H

#include "bank.h"
#include <vector>

class BankManagement {
private:
    std::vector<Bank> accounts;

public:
    void addAccount();
    void showAccounts() const;
    void removeAccount();
    void addMoney();
    void withdrawMoney();
};

#endif // BANK_MANAGEMENT_H
