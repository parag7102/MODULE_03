//Create an application that can perform all string related operations
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverse(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

// Function to check if a string is a palindrome
void palindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            printf("The string is not a palindrome.\n");
            return;
        }
    }
    printf("The string is a palindrome.\n");
}

// Function to copy a string
void copy_string(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

// Function to find the length of a string
void length(char str[]) {
    printf("Length of the string: %d\n", strlen(str));
}

// Function to find the frequency of a character in a string
void frequency(char str[], char ch) {
    int freq = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch)
            freq++;
    }
    printf("Frequency of %c: %d\n", ch, freq);
}

// Function to find the number of vowels, consonants, digits 
void count_elements(char str[]) {
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", vowels, consonants, digits, spaces);
}

int main() {
    char str[100], ch;
    int choice;
    do {
        printf("\nEnter your choice:\n1. Reverse string\n2. Check palindrome\n3. Copy string\n4. Find length\n5. Find frequency of character\n6. Count vowels, consonants, digits and spaces\n7. Exit\n");
        scanf("%d", &choice);
        if (choice == 7)
            break;
        printf("Enter the string: ");
        scanf("%s", str);
        switch (choice) {
            case 1:
                reverse(str);
                break;
            case 2:
                palindrome(str);
                break;
            case 3:
                copy_string(str);
                break;
            case 4:
                length(str);
                break;
            case 5:
                printf("Enter the character: ");
                scanf(" %c", &ch);
                frequency(str, ch);
                break;
            case 6:
                count_elements(str);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}
