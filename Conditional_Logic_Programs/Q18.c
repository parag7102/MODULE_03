// 18. Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    amount = sellingPrice - costPrice;

    if(amount > 0) {
        printf("Profit = %.2f\n", amount);
    } else if(amount < 0) {
        printf("Loss = %.2f\n", -amount);
    } else {
        printf("Neither profit nor loss.\n");
    }

    return 0;
}

