//3. Wap to find area and circumference of circle.
#include <stdio.h> 
#include<conio.h> 
//#define PI 3.14159  
int main() {  
    float pie = 3.14;
    float radius, area, circumference;  
printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  
    area = pie * radius * radius;  
    circumference = 2 * pie * radius;  
printf("Area of the circle: %f\n", area);  
printf("Circumference of the circle: %f\n", circumference);  
    return 0;  
} 