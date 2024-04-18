// 32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n The sum of the two numbers is: %d", sum);

    if(sum > INT_MAX) {
        printf("\n The sum exceeds the maximum limit for int.");
    } else if(sum < INT_MIN) {
        printf("\ nThe sum is less than the minimum limit for int.");
    } else {
        printf("\n The sum is within the range of int.");
    }

    return 0;
}
