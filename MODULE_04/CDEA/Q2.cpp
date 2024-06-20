/*2. Write a program of Addition, Subtraction, Division, 
    Multiplication using constructor.*/
#include<iostream>
using namespace std;

class Arithmetic {
    private:
        int num1, num2;

    public:
        // Constructor
        Arithmetic(int a, int b) {
            num1 = a;
            num2 = b;
        }

        
        int add() {
            return num1 + num2;
        }

        
        int subtract() {
            return num1 - num2;
        }

        
        int multiply() {
            return num1 * num2;
        }


        float divide() {
            if(num2 != 0)
                return (float) num1 / num2;
            else
                return 0;
        }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

 Arithmetic arith(num1, num2);

    cout << "Addition of " << num1 << " and " << num2 << " is: " << arith.add() << endl;
    cout << "Subtraction of " << num1 << " and " << num2 << " is: " << arith.subtract() << endl;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << arith.multiply() << endl;
    cout << "Division of " << num1 << " and " << num2 << " is: " << arith.divide() << endl;

    return 0;
}
