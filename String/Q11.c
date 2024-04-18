/*11. Write a program in C to read a sentence and replace lowercase 
      characters with uppercase and vice versa.*/
#include <stdio.h>

void toggleCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    toggleCase(str);

    printf("The sentence with toggled case is: %s", str);

    return 0;
}
