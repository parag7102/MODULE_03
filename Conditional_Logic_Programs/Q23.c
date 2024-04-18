/*23. WAP to input the week number and print week day.*/
#include <stdio.h>

int main() {
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    switch(weekNumber) {
        case 1: 
            printf("Monday\n");
            break;
        case 2: 
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4: 
            printf("Thursday\n");
            break;
        case 5: 
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7: 
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
