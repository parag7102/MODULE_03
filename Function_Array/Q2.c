//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.
#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if(num2 != 0)
                printf("Result: %.2f\n", (float)num1 / (float)num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
