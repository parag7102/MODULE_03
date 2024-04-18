//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter a positive value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        if(i % 2 == 0) {
            sum -= (double)i / (i + 1);  
        } else {
            sum += (double)i / (i + 1);  
        }
    }

    printf("Sum = %.2f", sum);

    return 0;
}
