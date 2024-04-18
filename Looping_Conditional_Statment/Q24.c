//24. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive Number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        sum += i * i;  // add square of i to sum
    }

    printf("Sum = %d", sum);

    return 0;
}
