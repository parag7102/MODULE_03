/*10. Write a program to concatenate the two strings using Operator Overloading */
#include<iostream>
#include<string>
using namespace std;

class String {
    string str;

public:
    
    String(string s = "") : str(s) {}

    
    String operator+(String &s2) {
        return String(str + s2.str);
    }

    
    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2(" World"), s3;

    s3 = s1 + s2;

    cout << "After concatenation: ";
    s3.display();

    return 0;
}
