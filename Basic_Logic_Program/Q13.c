// 13. Find character value from ascii
#include<stdio.h>
#include<conio.h>
int main() {
    int ascii;
    char character;

    printf("Enter the ASCII value: ");
    scanf("%d", &ascii);

    character = (char) ascii;

    printf("\n The character for ASCII value %d is: %c", ascii, character);

    return 0;
}
