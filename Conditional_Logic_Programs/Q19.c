//19. Write a program in C to calculate and print the electricity bill of a given customer.
#include <stdio.h>
#include<conio.h>
int main() {
    int customerID, units;
    float amount;
    char name[50];

    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 350) {
        amount = units * 1.20;
    } else if(units > 350 && units < 600) {
        amount = units * 1.50;
    } else if(units >= 600 && units < 800) {
        amount = units * 1.80;
    } else {
        amount = units * 2.00;
    }

    printf("Customer ID: %d\n", customerID);
    printf("Customer name: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Amount to be paid: %.2f\n", amount);

    return 0;
}
