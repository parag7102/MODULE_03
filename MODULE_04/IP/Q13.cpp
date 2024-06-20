/*13. Write a program to find the max number from given
      two numbers using friend function */
#include<iostream>
using namespace std;

class Number {
    int num;

public:
    
    Number(int n) : num(n) {}

    
    void display() {
        cout << num << endl;
    }

   
    friend void findMax(Number& n1, Number& n2);
};

void findMax(Number& n1, Number& n2) {
   
    if(n1.num > n2.num)
        cout << "The maximum number is: " << n1.num << endl;
    else
        cout << "The maximum number is: " << n2.num << endl;
}

int main() {
    Number n1(5), n2(10);

    cout << "The numbers are: " << endl;
    n1.display();
    n2.display();

    findMax(n1, n2);

    return 0;
}
