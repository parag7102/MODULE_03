//23. 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        sum += i;  // add i to sum
    }

    printf("Sum = %d", sum);

    return 0;
}
