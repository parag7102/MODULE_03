/*Write a C program to input basic salary of an employee and calculate its Gross salary */
#include <stdio.h>
#include<conio.h>
int main() {
    float basicSalary, grossSalary, hra, da;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.2;
        da = basicSalary * 0.8;
    } else if (basicSalary <= 20000) {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.9;
    } else {
        hra = basicSalary * 0.3;
        da = basicSalary * 0.95;
    }

    grossSalary = basicSalary + hra + da;
    printf("Gross salary of the employee is: %.2f\n", grossSalary);

    return 0;
}
