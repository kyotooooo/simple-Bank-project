#include "bankManagement.h"
#include <iostream>

void BankManagement::addAccount() {
    int accNum;
    std::cout << "Enter an account id: ";
    std::cin >> accNum;

    std::string accName;
    std::cout << "Enter a name for account: ";
    std::cin >> accName;

    int amount;
    std::cout << "Enter an amount of money that will be on account: ";
    std::cin >> amount;

    accounts.push_back(Bank(accNum, accName, amount));
}

void BankManagement::showAccounts() const {
    for (const auto& account : accounts) {
        std::cout << "ID: " << account.Bank::getId() << "\t name: " << account.Bank::getName() << "\t balance: " << account.Bank::getBalance() << std::endl;
    }
}
    
void BankManagement::removeAccount() {
    int accNum;
    std::cout << "Enter an account id to remove: ";
    std::cin >> accNum;

    for (auto it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->getId() == accNum) {
            accounts.erase(it);
            break;
        }
    }
}

void BankManagement::addMoney() {
    int accNum, amount;
    std::cout << "Enter an account ID: ";
    std::cin >> accNum;
    std::cout << "Enter an amount to add: ";
    std::cin >> amount;

    for (auto& account : accounts) {
        if (account.getId() == accNum) {
            account.addMoney(amount);
            break;
        }
    }
}

void BankManagement::withdrawMoney() {
    int accNum, amount;
    std::cout << "Enter an account ID: ";
    std::cin >> accNum;
    std::cout << "Enter an amount to withdraw: ";
    std::cin >> amount;

    for (auto& account : accounts) {
        if (account.getId() == accNum) {
            account.withdrawMoney(amount);
            break;
        }
    }
}
