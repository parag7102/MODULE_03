//14. Write a program in C to combine two strings manually
#include <stdio.h>

void concatenate(char* destination, const char* source) {
    while (*destination) {
        destination++;  
    }
    while ((*destination++ = *source++)) { 
        ;  // empty body in loop
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  

   
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    concatenate(str1, str2);

    printf("The combined string is: %s\n", str1);

    return 0;
}
