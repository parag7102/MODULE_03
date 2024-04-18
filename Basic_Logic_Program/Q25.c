// 25. Accept 5 expense from user and find average of expense
#include<stdio.h>

int main() {
    float expense[5], totalExpense = 0, averageExpense;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i+1);
        scanf("%f", &expense[i]);

        totalExpense += expense[i];
    }

    averageExpense = totalExpense / 5;

    printf("\n The total expense is: %f", totalExpense);
    printf("\n The average expense is: %f", averageExpense);

    return 0;
}
