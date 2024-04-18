// 29. Convert minutes into seconds and hours
#include<stdio.h>
#include<conio.h>
int main() {
    int minutes;
    float seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    hours = minutes / 60.0;

    printf("\n The equivalent number of seconds is: %f", seconds);
    printf("\n The equivalent number of hours is: %f", hours);

    return 0;
}
