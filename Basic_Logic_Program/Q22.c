/* 22. Calculate compound interest (Compound Interest formula:
        a. Formula to calculate compound interest annually is given by:
            Amount= P(1 + R/100)t
        b. Compound Interest = Amount – P */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    float P, R, t, Amount, CI;

    printf("Enter the principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the annual interest rate (R) in percentage: ");
    scanf("%f", &R);

    printf("Enter the number of years the money is invested for (t): ");
    scanf("%f", &t);

    Amount = P * pow((1 + R/100), t);
    CI = Amount - P;

    printf("\n The compound interest is: %f", CI);

    return 0;
}
