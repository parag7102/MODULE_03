/*1. Write a program to find the multiplication values and
     the cubic values using inline function */
#include<iostream>
using namespace std;


inline int multiply(int a, int b) {
    return a * b;
}


inline int cubic(int a) {
    return a * a * a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
    cout << "Cubic value of " << num1 << " is: " << cubic(num1) << endl;
    cout << "Cubic value of " << num2 << " is: " << cubic(num2) << endl;

    return 0;
}
