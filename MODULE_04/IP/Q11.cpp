/*11. Write a program to calculate the area of circle, rectangle 
and triangle using Function Overloading 
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */
#include<iostream>
using namespace std;

double calculateArea(double radius) {
    return 3.14 * radius * radius;
}


double calculateArea(double length, double breadth) {
    return length * breadth;
}

double calculateArea(double base, double height, int _) {
    return 0.5 * base * height;
}

int main() {
    double radius = 5.0;
    double length = 4.0, breadth = 6.0;
    double base = 3.0, height = 7.0;

    cout << "Area of circle: " << calculateArea(radius) << endl;
    cout << "Area of rectangle: " << calculateArea(length, breadth) << endl;
    cout << "Area of triangle: " << calculateArea(base, height, 0) << endl;

    return 0;
}
