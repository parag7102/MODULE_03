/*7. Write a C++ Program to illustrates 
    the use of Constructors in multilevel inheritance */
#include<iostream>
using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent's constructor called" << endl;
    }
};

class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent's constructor called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child's constructor called" << endl;
    }
};

int main() {
    Child c;

    return 0;
}
