/*7. Write a C++ program to implement a class called Date that has
     private member variables for day, month, and year. 
     Include member functions to set and get these variables, 
     as well as to validate if the date is valid.*/
#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

   
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    
    bool isValidDate() const {
        if(year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
            return false;
        if(month == 2) {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if(day > 29 || (day == 29 && !isLeapYear))
                return false;
        }
        return true;
    }
};

int main() {
    Date date(30, 2, 2024);
    if(date.isValidDate())
        cout << "Valid date\n";
    else
        cout << "Invalid date\n";
    return 0;
}
