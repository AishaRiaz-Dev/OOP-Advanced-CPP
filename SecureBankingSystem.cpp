/**
 * Project: Secure Bank Account Logic
 * Concept: Data Hiding and Encapsulation
 */

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << endl;
        }
    }

    void showBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Aisha", 500.0);
    myAccount.deposit(250.0);
    myAccount.showBalance();
    return 0;
}
