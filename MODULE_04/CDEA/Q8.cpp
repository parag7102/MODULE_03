/*8. Write a C++ program to implement a class called Student that has private
    member variables for name, class, roll number, and marks. Include member
    functions to calculate the grade based on the marks and display the 
    student's information. Accept address from each student implement using
    of aggregation */
#include <iostream>
using namespace std;
#include <string>

class Address {
public:
    string street;
    string city;
    string state;
    string country;

    Address(string street,string city,string state,string country) : street(street), city(city), state(state), country(country) {}
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    Address* address; 

public:
    // Constructor
    Student(string name, string className, int rollNumber, float marks, Address* addr) : name(name), className(className), rollNumber(rollNumber), marks(marks), address(addr) {}

    
    char calculateGrade() const {
        if(marks >= 90) return 'A';
        else if(marks >= 80) return 'B';
        else if(marks >= 70) return 'C';
        else if(marks >= 60) return 'D';
        else return 'F';
    }

    
    void displayInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Class: " << className << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Grade: " << calculateGrade() << "\n";
        cout << "Address: " << address->street << ", " << address->city << ", " << address->state << ", " << address->country << "\n";
    }
};

int main() {
    Address addr("123 Street", "Surat", "Gujarat", "India");
    Student student("Yash Patel", "12th", 1, 85.5, &addr);
    student.displayInfo();
    return 0;
}
