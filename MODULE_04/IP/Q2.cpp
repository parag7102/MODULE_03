/*2. Write a C++ Program to find Area of Rectangle using inheritance*/
#include<iostream>
using namespace std;

class Shape {
public:
    double length;
    double breadth;

    void inputData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
};

class Rectangle : public Shape {
public:
    void calculateArea() {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.inputData();
    rectangle.calculateArea();

    return 0;
}
