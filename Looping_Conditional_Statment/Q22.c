//22. C Program to Reverse a Number Using FOR Loop Series Program:
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter the value: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    printf("Reversed Number: %d", reversedNum);

    return 0;
}
