/* 12. Accept number of students from user. 
     I need to give 5 apples to each student. 
        How many apples are required? */
#include<stdio.h>
#include<conio.h>
int main() {
    int stud, apples;

    printf("Enter the number of students: ");
    scanf("%d", &stud);

    apples = 5 * stud;

    printf("The number of apples required is: %d\n", apples);

    return 0;
}
