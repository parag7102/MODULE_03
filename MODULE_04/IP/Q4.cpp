/*4.Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Marks {
public:
    float math;
    float science;
    float english;

    void inputData() {
        cout << "Enter marks in Math: ";
        cin >> math;
        cout << "Enter marks in Science: ";
        cin >> science;
        cout << "Enter marks in English: ";
        cin >> english;
    }
};

class Marksheet : public Student, public Marks {
public:
    void displayData() {
        cout << "\nMark Sheet:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
        cout << "Marks in English: " << english << endl;
    }
};

int main() {
    Marksheet marksheet;
    cout << "Enter student details:" << endl;
    marksheet.Student::inputData();
    cout << "Enter marks details:" << endl;
    marksheet.Marks::inputData();
    marksheet.displayData();

    return 0;
}
