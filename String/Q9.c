//9. Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[length] != '\0') { 
        length++;
    }

    printf("The maximum number of characters in the string is: %d\n", length - 1); 
    return 0;
}
