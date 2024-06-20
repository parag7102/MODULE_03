/*5. Assume that the test results of a batch of students are stored 
     in three different classes. Class Students are storing the 
     roll number. Class Test stores the marks obtained in two 
     subjects and class result contains the total marks obtained 
     in the test. The class result can inherit the details of the
    marks obtained in the test and roll number of students. 
    (Multilevel Inheritance) */
#include<iostream>
using namespace std;

class Student {
public:
    int rollNo;

    void inputData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Test : public Student {
public:
    float mark1;
    float mark2;

    void inputData() {
        Student::inputData();
        cout << "Enter marks obtained in subject 1: ";
        cin >> mark1;
        cout << "Enter marks obtained in subject 2: ";
        cin >> mark2;
    }
};

class Result : public Test {
public:
    float totalMarks;

    void calculateTotalMarks() {
        totalMarks = mark1 + mark2;
    }

    void displayData() {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Marks in Subject 1: " << mark1 << endl;
        cout << "Marks in Subject 2: " << mark2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result result;
    result.inputData();
    result.calculateTotalMarks();
    result.displayData();

    return 0;
}
