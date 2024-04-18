// 31. Convert kilometers into meters
#include<stdio.h>
#include<conio.h>

int main() {
    float kilometers, meters;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("\n The distance in meters is: %f", meters);

    return 0;
}
