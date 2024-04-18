//5. Write a program in C to compare two strings without using string library functions.
#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else
        return -1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = compareStrings(str1, str2);
    if (result == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
