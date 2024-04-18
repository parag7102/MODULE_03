/* 3. WAP to take 10 no. Input from user find out below values
      c. Sum of even numbers */
#include <stdio.h>

int main() {
    int num, even_count = 0, sum_even = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");
    
            while (getchar() != '\n');
            continue;
        }

        if (num % 2 == 0) {
            even_count++;
            sum_even += num;
        }
    }

    printf("There are %d even numbers.\n", even_count);
    printf("Sum of even numbers: %d\n", sum_even);

    return 0;
}
