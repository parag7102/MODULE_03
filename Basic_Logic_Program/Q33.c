// 33. C Program to Read Integer and Print First Three Powers
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n The first power of %d is: %d", num, (int)pow(num, 1));
    printf("\n The second power of %d is: %d", num, (int)pow(num, 2));
    printf("\n The third power of %d is: %d", num, (int)pow(num, 3));

    return 0;
}
