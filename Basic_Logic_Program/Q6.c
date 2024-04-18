//6. Find Area of Triangle
#include <stdio.h>
int  main()
{
    float base,height;

    printf("Enter Base: ");
    scanf("%f",&base);
    
    printf("Enter Height: ");
    scanf("%f",&height);
    
    float area = (base * height) / 2;
 

    printf("Area of Triangle is %f",area);

    return 0;
}