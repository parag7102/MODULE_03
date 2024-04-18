/* 3.  WAP to take 10 no. Input from user find out below values
      d. Sum of odd numbers*/
#include <stdio.h>
#include<conio.h>
int main() {
    int num, odd_count = 0, sum_odd = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");
           
            while (getchar() != '\n');
            continue;
        }

        if (num % 2 != 0) {
            odd_count++;
            sum_odd += num;
        }
    }

    printf("There are %d odd numbers.\n", odd_count);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
