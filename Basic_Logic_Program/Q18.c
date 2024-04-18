// 18. Calculate person’s Annual salary
#include<stdio.h>
#include<conio.h>
int main() {
    float monthlySal, annualSal;

    printf("Enter the person monthly salary: ");
    scanf("%f", &monthlySal);

    annualSal = 12 * monthlySal;

    printf("\n The annual salary is: %f", annualSal);

    return 0;
}
