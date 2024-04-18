/* 3. WAP to take 10 no. Input from user find out below values
    a. How many Even numbers are there */
#include <stdio.h>

int main() {
    int num, even_count = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            
            while (getchar() != '\n');
            continue;
        }

        if (num % 2 == 0) {
            even_count++;
        }
    }

    printf("There are %d even numbers.\n", even_count);

    return 0;
}

