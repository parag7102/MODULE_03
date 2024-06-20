/*3. Create a class person having members name and age. Derive a class
    student having member percentage. Derive another class teacher 
    having member salary. Write necessary member function to initialize,
    read and write data. Write also Main function (Multiple Inheritance)*/
#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void inputData() {
        Person::inputData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void inputData() {
        Person::inputData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    cout << "Enter student details:" << endl;
    student.inputData();
    cout << "\nStudent Details:" << endl;
    student.displayData();

    Teacher teacher;
    cout << "\nEnter teacher details:" << endl;
    teacher.inputData();
    cout << "\nTeacher Details:" << endl;
    teacher.displayData();

    return 0;
}
