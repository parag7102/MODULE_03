//13.calculate the Factorial of a Given Number using while loop
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter value: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        while(num > 1) {
            factorial *= num;
            num--;
        }
        printf("Factorial = %llu", factorial);
    }

    return 0;
}
