// 24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>

int main() {
    char name[5][50];
    float sal[5], totalSal = 0, averageSal;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter the name of employee %d: ", i+1);
        scanf("%s", name[i]);

        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &sal[i]);

        totalSal += sal[i];
    }

    averageSal = totalSal / 5;

    printf("\n The total salary of all employees is: %f", totalSal);
    printf("\n The average salary of all employees is: %f", averageSal);

    return 0;
}
