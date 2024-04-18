//4. WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int num, i, range;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the range: ");
    scanf("%d", &range);

    for(i = 1; i <= range; i++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }

    return 0;
}
