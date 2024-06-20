/*12. Write a program to swap the two numbers using 
      friend function without using third variable */
#include<iostream>
using namespace std;

class Number {
    int num;

public:
    
    Number(int n) : num(n) {}

   
    void display() {
        cout << num << endl;
    }

    
    friend void swap(Number& n1, Number& n2);
};

void swap(Number& n1, Number& n2) {
    
    n1.num = n1.num + n2.num;
    n2.num = n1.num - n2.num;
    n1.num = n1.num - n2.num;
}

int main() {
    Number n1(5), n2(10);

    cout << "Before swap: " << endl;
    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "After swap: " << endl;
    n1.display();
    n2.display();

    return 0;
}
