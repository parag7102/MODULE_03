// 27. Convert days into months
#include<stdio.h>
#include<conio.h>

int main() {
    int days;
    float months;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    months = days / 30.0;

    printf("The equivalent number of months is: %.2f\n", months);

    return 0;
}
