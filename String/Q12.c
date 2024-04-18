//12. Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[] = "is";
    char *p;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    p = strstr(str, word);
    while (p != NULL) {
        count++;
        p = strstr(p + 1, word);
    }

    printf("The word '%s' appears %d times in the string.\n", word, count);

    return 0;
}
