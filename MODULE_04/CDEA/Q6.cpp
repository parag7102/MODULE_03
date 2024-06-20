/*6. Write a C++ program to implement a class called Employee that
     has private member variables for name, employee ID, and salary.
     Include member functions to calculate and set salary based on 
     employee performance. Using of constructor */
#include <iostream>
using namespace std;

#include <string>

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string name, int employeeID, double salary) {
        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
    }

   
    void calculateSalary(int performanceRating) {
        if (performanceRating == 1) {
            salary *= 1.10;  // 10% raise for excellent performance
        } else if (performanceRating == 2) {
            salary *= 1.05;  // 5% raise for good performance
        } else {
            salary *= 1.02;  // 2% raise for average performance
        }
    }

   
    void setSalary(double newSalary) {
        salary = newSalary;
    }

    
    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    Employee emp("Dhaval Parmar", 12345, 50000.0);
    emp.calculateSalary(1);
    emp.printDetails();
    return 0;
}
