#include <iostream>
#include <cstdlib> 
#include "bankManagement.h"

int main() {
    BankManagement management;
    int operation;
    char ext = 'q';

    while (ext != 'y' && ext != 'Y') {
        std::cout << "\n\t OPERATIONS\n 1. Add new account\n 2. Show all accounts\n 3. Remove an account\n 4. Withdraw money\n 5. Add money\n 6. Clear display\n 7. Exit" << std::endl;
        std::cin >> operation;

        switch (operation) {
        case 1: management.addAccount(); break;
        case 2: management.showAccounts(); break;
        case 3: management.removeAccount(); break;
        case 4: management.withdrawMoney(); break;
        case 5: management.addMoney(); break;
        case 6: system("cls"); break; 
        case 7: ext = 'y'; break;
        default: std::cout << "Invalid input. Please enter a valid operation number." << std::endl; break;
        }
    }

    return 0;
}