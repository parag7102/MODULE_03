//13. Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>

void removeNonAlphabets(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    removeNonAlphabets(str);

    printf("The string after removing non-alphabet characters is: %s", str);

    return 0;
}
