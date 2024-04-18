//4. Write a program in C to count the total number of words in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            count++;
        }
    }

    printf("The total number of words in the string is: %d\n", count + 1);

    return 0;
}
