//14. Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    while(num > 1) {
        fact *= num;
        num--;
    }
    return fact;
}

int main() {
    int numbers[5];
    unsigned long long fact;

    printf("Enter 5 integers:\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("\nThe factorials of the numbers you entered are:\n");

    for(int i = 0; i < 5; i++) {
        fact = factorial(numbers[i]);
        printf("Factorial of %d: %llu\n", numbers[i], fact);
    }

    return 0;
}
