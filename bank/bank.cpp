#include "bank.h"
#include <iostream>

Bank::Bank(int id, std::string name, int money) : m_id(id), m_name(name), m_balance(money) {}

int Bank::getId() const {
    return m_id;
}

std::string Bank::getName() const {
    return m_name;
}

int Bank::getBalance() const {
    return m_balance;
}

void Bank::addMoney(int amount)  {
    m_balance += amount;
}

void Bank::withdrawMoney(int amount)  {
    if (m_balance < amount) {
        std::cout << "Error, Insufficient funds." << std::endl;
    }
    else {
        m_balance -= amount;
    }
}
