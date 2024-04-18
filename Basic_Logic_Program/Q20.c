// 20. Accept monthly salary from the user and deduct 10% 
//     insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>

int main() {
    float monthlySal, insurancePremium, loanInstallment, remainingSal;

    printf("Enter the monthly salary: ");
    scanf("%f", &monthlySal);

    insurancePremium = 0.10 * monthlySal;
    loanInstallment = 0.10 * monthlySal;

    remainingSal = monthlySal - insurancePremium - loanInstallment;

    printf("\n The remaining sal after deduct insurance premium & loan installment: %f", remainingSal);

    return 0;
}
