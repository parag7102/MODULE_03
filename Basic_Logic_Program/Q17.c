// 17. . Calculate person’s insurance premium based on salary
#include<stdio.h>
#include<conio.h>
int main() {
    float sal, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &sal);

    premium = 0.05 * sal;

    printf("\n The insurance premium is: %f", premium);

    return 0;
}
