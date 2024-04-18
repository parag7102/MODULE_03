// 30. WAP to convert years into days and days into years
#include<stdio.h>

int main() {
    int years, days;
    float daysInYear, yearsInDays;

    printf("\n Enter the number of years: ");
    scanf("%d", &years);

    daysInYear = years * 365;
    printf("\n The equivalent number of days for %d years is: %f", years, daysInYear);

    printf("\n Enter the number of days: ");
    scanf("%d", &days);

    yearsInDays = days / 365.0;
    printf("\n The equivalent number of years for %d days is: %f", days, yearsInDays);

    return 0;
}
