/*1. Write a program of to swap the two values using template */
#include<iostream>
using namespace std;


template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swap: " << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swap: " << "num1 = " << num1 << ", num2 = " << num2 << endl;

    double d1 = 1.5, d2 = 2.5;
    cout << "Before swap: " << "d1 = " << d1 << ", d2 = " << d2 << endl;
    swapValues(d1, d2);
    cout << "After swap: " << "d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}
