//4. WAP to find factorial using recursion
#include <stdio.h>


long long factorial(int n) {
    if (n == 0)  
        return 1;
    else
        return n * factorial(n - 1);  
}

int main() {
    int num;
    printf("Enter a positive Number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld\n", num, factorial(num));
    return 0;
}
