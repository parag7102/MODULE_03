// 7. Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 35) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry, you have failed.\n");
    }

    return 0;
}
