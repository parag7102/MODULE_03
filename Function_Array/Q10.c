//10. WAP to perform Palindrome number using for loop and function
#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    for (; n != 0; n /= 10) {
        rev = rev * 10 + n % 10;
    }
    return rev;
}

int isPalindrome(int n) {
    if (n == reverse(n))
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

