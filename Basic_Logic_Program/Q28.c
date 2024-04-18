// 28. Convert years into days and months
#include<stdio.h>
#include<conio.h>
int main() {
    int years;
    float days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    months = years * 12;

    printf("\n The equivalent number of days is: %f", days);
    printf("\n The equivalent number of months is: %f", months);

    return 0;
}
