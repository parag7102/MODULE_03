/* 20.If bill exceeds Rs. 800 then a surcharge 
   of 18% will be charged and the minimum bill should be of Rs. 256/- */
#include <stdio.h>
#include<conio.h>
int main() {
    float bill, finalBill;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill < 256) {
        printf("The minimum bill should be of Rs. 256/-\n");
    } else if (bill > 800) {
        finalBill = bill + (bill * 0.18);
        printf("Final bill amount with 18%% surcharge is Rs. %.2f\n", finalBill);
    } else {
        printf("Final bill amount is Rs. %.2f\n", bill);
    }

    return 0;
}
