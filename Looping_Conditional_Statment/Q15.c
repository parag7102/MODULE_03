 //15. Calculate sum of 10 numbers using of while loop
#include <stdio.h>

int main() {
    int i = 0, num;
    int sum = 0;

    printf("Enter 10 integers:\n");

    while(i < 10) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
