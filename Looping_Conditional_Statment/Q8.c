//8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)98596
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, max = 0, remainder;

    printf("Enter an value: ");
    scanf("%d", &num);

    num = abs(num); 

    while(num != 0) {
        remainder = num % 10;
        if (remainder > max)
            max = remainder;
        num /= 10;
    }

    printf("Max digit: %d\n", max);

    return 0;
}
