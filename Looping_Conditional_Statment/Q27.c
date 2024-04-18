//27. 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n, i;
    int term = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        printf("%d ", term);
        if(i % 3 == 0) {
            term *= 2;  
        } else {
            term += 1;  
        }
    }

    return 0;
}
