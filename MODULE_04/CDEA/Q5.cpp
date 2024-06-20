/*5. Write a C++ program to create a class called Triangle that 
    has private member variables for the lengths of its three sides.
    Implement member functions to determine if the triangle is equilateral,
    isosceles, or scalene.*/
#include<iostream>
using namespace std;

class Triangle {
    private:
        double side1, side2, side3;

    public:
        // Constructor
        Triangle(double a, double b, double c) {
            side1 = a;
            side2 = b;
            side3 = c;
        }

        // Function to check if triangle is equilateral
        bool isEquilateral() {
            return (side1 == side2 && side2 == side3);
        }

        // Function to check if triangle is isosceles
        bool isIsosceles() {
            return (side1 == side2 || side1 == side3 || side2 == side3);
        }

        // Function to check if triangle is scalene
        bool isScalene() {
            return (side1 != side2 && side1 != side3 && side2 != side3);
        }
};

int main() {
    
    Triangle triangle1(3.0, 4.0, 5.0);

    if(triangle1.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if(triangle1.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if(triangle1.isScalene()) {
        cout << "The triangle is scalene." << endl;
    } else {
        cout << "Invalid triangle." << endl;
    }

    return 0;
}
