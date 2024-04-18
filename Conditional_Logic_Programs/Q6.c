// 6. Find the Character Is Vowel or Not
#include <stdio.h>

int main() {
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // checks lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // checks uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.\n", c);
    else
        printf("%c is not a vowel.\n", c);

    return 0;
}
