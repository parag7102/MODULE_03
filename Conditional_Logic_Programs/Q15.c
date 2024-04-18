#include <stdio.h>

int main() {
    int maths, phy, chem, total, totalMP;

    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    total = maths + phy + chem;
    totalMP = maths + phy;

    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 190) || totalMP >= 140)
        printf("The candidate is eligible.\n");
    else
        printf("The candidate is not eligible.\n");

    return 0;
}
