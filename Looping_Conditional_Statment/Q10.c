/*10. Write a program you have to make a summation of first and last Digit. 
        (E.g.,1234 Ans: -5)*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter value: ");
    scanf("%d", &num);

    num = abs(num); 

    lastDigit = num % 10; 

   
    firstDigit = num;
    while(firstDigit >= 10) {
        firstDigit /= 10;
    }

    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);

    return 0;
}
