/*6. Write a C++ Program to show access to 
    Private Public and Protected using Inheritance */
#include<iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;

protected:
    int protectedVar = 2;

public:
    int publicVar = 3;

    int getPrivateVar() {
        return privateVar;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Protected Var: " << protectedVar << endl;

        cout << "Public Var: " << publicVar << endl;

        cout << "Private Var through method: " << getPrivateVar() << endl;
    }
};

int main() {
    Derived d;
    d.display();

    return 0;
}
