//17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>

int main() {
    int num, i = 0, evenCount = 0, oddCount = 0;

    printf("Enter 5 value:\n");

    while (i < 5) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
