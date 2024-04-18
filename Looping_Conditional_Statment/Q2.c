// 2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
#include<conio.h>;
int main() {
    int numbers[5];

    printf("Enter 5 numbers: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("This numbers you entered: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
