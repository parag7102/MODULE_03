/*5. Define a class to represent a bank account.*/
#include<iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance is: " << balance << endl;
    }

    void withdraw(double amount) {
        if(amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance is: " << balance << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance is: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();

    return 0;
}
