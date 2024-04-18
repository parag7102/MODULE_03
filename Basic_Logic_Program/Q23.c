// 23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>

int main() {
    float p, q;

    printf("Enter the num1: ");
    scanf("%f", &p);

    printf("Enter the num2: ");
    scanf("%f", &q);

    p = p * q;
    q = p / q;
    p = p / q;

    printf("\n After swapping, the num1 : %f", p);

    printf("\n After swapping, the num2 : %f", q);

    return 0;
}
