/*4. Write a C++ program to implement a class called 
    Bank Account that has private member variables for account number and balance. 
    Include member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        // Constructor
        BankAccount(int accNum, double bal) {
            accountNumber = accNum;
            balance = bal;
        }

        // Function to deposit money
        void deposit(double amount) {
            balance += amount;
            cout << "Deposit successful. New balance is: " << balance << endl;
        }

        // Function to withdraw money
        void withdraw(double amount) {
            if(amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. New balance is: " << balance << endl;
            } else {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            }
        }

        // Function to display account details
        void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    
    BankAccount account1(123456, 5000.00);

  
    account1.display();

    
    account1.deposit(2000.00);

    
    account1.withdraw(1500.00);

    
    account1.display();

    return 0;
}
