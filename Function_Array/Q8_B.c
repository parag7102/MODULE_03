/*8. WAP to reverse a string and check that the string is palindrome or not 
    b. Write a program of structure for five employee that provides the following information
      -print and display empno, empname, address and age */
#include <stdio.h>
#include <string.h>

void reverse(char str[], char rev[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

int isPalindrome(char str[]) {
    char rev[100];
    reverse(str, rev);
    if (strcmp(str, rev) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
