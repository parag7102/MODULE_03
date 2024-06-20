/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;

class Matrix {
    int arr[5];

public:
    
    void input() {
        cout << "Enter elements: ";
        for(int i=0; i<5; i++)
            cin >> arr[i];
    }

    
    Matrix operator+(Matrix m2) {
        Matrix m3;
        for(int i=0; i<5; i++)
            m3.arr[i] = this->arr[i] + m2.arr[i];
        return m3;
    }

    
    void display() {
        for(int i=0; i<5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "Enter elements for first matrix: " << endl;
    m1.input();
    cout << "Enter elements for second matrix: " << endl;
    m2.input();

    m3 = m1 + m2;

    cout << "After addition: " << endl;
    m3.display();

    return 0;
}
