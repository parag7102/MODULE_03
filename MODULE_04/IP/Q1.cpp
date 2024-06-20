/*1. ssume a class cricketer is declared. Declare a derived class 
    batsman from cricketer. Data member of batsman. Total runs,
    Average runs and best performance. Member functions input data,
    calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matchesPlayed;

    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    int bestPerformance;
    float averageRuns;

public:
    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score): ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = (float)totalRuns / matchesPlayed;
    }

    void displayData() {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}
