// 9. Find circumference of Triangle
#include<stdio.h>
#include<conio.h>
int main() {
    float a, b, c, perimeter;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    printf("\n The perimeter of the triangle is: %.2f", perimeter);

    return 0;
}
