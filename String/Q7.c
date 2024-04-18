//7. Write a program in C to copy one string to another string.
#include <stdio.h>

void copyString(char destination[], const char source[]) {
    int i = 0;
    while ((destination[i] = source[i]) != '\0') {
        ++i;
    }
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  

    copyString(destination, source);

    printf("Copied string: %s", destination);

    return 0;
}
