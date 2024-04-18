//1. Write a program in C to find the length of a string without using library functions.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[length] != '\0') {  
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
