/*3. Write a C++ program to create a class called Car that 
    has private member variables for company, model, and year. 
    Implement member functions to get and set these variables.*/
#include<iostream>
#include<string>
using namespace std;

class Car {
    private:
        string company;
        string model;
        int year;

    public:
        // Constructor
        Car(string c, string m, int y) {
            company = c;
            model = m;
            year = y;
        }

        //get func
        string getCompany() {
            return company;
        }

        string getModel() {
            return model;
        }

        int getYear() {
            return year;
        }

        // Set func
        void setCompany(string c) {
            company = c;
        }

        void setModel(string m) {
            model = m;
        }

        void setYear(int y) {
            year = y;
        }
};

int main() {
    
    Car car1("Toyota", "Corolla", 2020);

    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;


    car1.setCompany("JUPITER-125");
    car1.setModel("TVS");
    car1.setYear(2022);

    cout << "Updated details:" << endl;
    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;

    return 0;
}
