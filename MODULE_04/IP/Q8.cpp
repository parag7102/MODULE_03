/*8. Write a program to Mathematic operation like Addition,
 Subtraction, Multiplication, Division Of two number using 
 different parameters and Function Overloading */
#include<iostream>
using namespace std;


int operate(int a, int b) {
    return a + b;
}


float operate(float a, float b) {
    return a - b;
}


double operate(double a, double b) {
    return a * b;
}


double operate(int a, double b) {
    if(b != 0)
        return a / b;
    else {
        cout << "Error! Division by zero is not allowed.";
        return 0;
    }
}

int main() {
    int a = 5, b = 3;
    float c = 4.5f, d = 2.5f;
    double e = 1.2, f = 0.8;

    cout << "Addition of " << a << " and " << b << " is " << operate(a, b) << endl;
    cout << "Subtraction of " << c << " and " << d << " is " << operate(c, d) << endl;
    cout << "Multiplication of " << e << " and " << f << " is " << operate(e, f) << endl;
    cout << "Division of " << a << " and " << e << " is " << operate(a, e) << endl;

    return 0;
}
