//15. Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], smallest[20], largest[20], word[20];
    int i = 0, j = 0, min = 20, max = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    while (str[i] != '\0') {
        while (str[i] != ' ' && str[i] != '\0') {
            word[j] = str[i];
            i++;
            j++;
        }
        word[j] = '\0';
        len = strlen(word);

        if (len < min) {
            min = len;
            strcpy(smallest, word);
        }
        if (len > max) {
            max = len;
            strcpy(largest, word);
        }
        i++;
        j = 0;
    }

    printf("Smallest word: %s \n", smallest);
    printf("Largest word: %s \n", largest);

    return 0;
}
