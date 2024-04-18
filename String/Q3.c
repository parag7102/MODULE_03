//3. Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    length = strlen(str) - 1; 

    printf("Individual characters from the string in reverse order are: \n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }

    return 0;
}
