#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string name, string number, string type, double amount) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = amount;
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
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Current balance is: " << balance << endl;
    }
};

int main() {
    BankAccount account("Parth Vaghela", "123456789", "Savings", 500.0);
    account.deposit(200.0);
    account.withdraw(100.0);
    account.displayBalance();

    return 0;
}
