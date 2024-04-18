//25. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, i, j, sum = 0, term = 0;

    printf("Enter a positive value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        term = 0;
        for(j = 1; j <= i; ++j) {
            term += j;  
        }
        sum += term; 
    }

    printf("Sum = %d", sum);

    return 0;
}
