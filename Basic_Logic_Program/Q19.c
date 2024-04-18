// 19. Calculate compound interest
#include<stdio.h>
#include<conio.h>
#include<math.h>


int main() {
    float P, r, M;
    int n, t;

    printf("Enter the principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the annual interest rate (r) in decimal form: ");
    scanf("%f", &r);

    printf("Enter the number of times that interest is compounded per year (n): ");
    scanf("%d", &n);

    printf("Enter the number of years the money is invested for (t): ");
    scanf("%d", &t);

    M = P * pow((1 + r/n), n*t);

    printf("\n The amount of money accumulated after %d years, including interest, is: %.2f", t, M);

    return 0;
}

