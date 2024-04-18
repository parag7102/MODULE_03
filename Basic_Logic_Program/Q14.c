// 14. Find ascii value of given number
#include<stdio.h>
#include<conio.h>
int main() {
    char character;
    int ascii;

    printf("Enter the character: ");
    scanf("%c", &character);

    ascii = (int) character;

    printf("\n The ASCII value for character %c is: %d", character, ascii);

    return 0;
}
