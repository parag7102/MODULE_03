//12. WAP to accept 5 students name and store it in array
#include <stdio.h>

int main() {
    char students[5][50];  

    
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(students[i], sizeof(students[i]), stdin);
        students[i][strcspn(students[i], "\n")] = 0;  
    }

    
    printf("\nThe names of the students are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}
