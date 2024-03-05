#ifndef BANK_H
#define BANK_H

#include <string>

class Bank {
private:
    int m_id;
    std::string m_name;
    int m_balance;

public:
    Bank(int id, std::string name, int money);

    int getId() const;
    std::string getName() const;
    int getBalance() const;
    void addMoney(int amount);
    void withdrawMoney(int amount);
};

#endif // BANK_H

