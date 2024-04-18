//11. Accept 5 names from user at run time.
#include <stdio.h>

int main() {
    char names[5][50];
    int i;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++) {
        printf("Enter name %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nThe names you entered are:\n");

    for(i = 0; i < 5; i++) {
        printf("Name %d: %s", i+1, names[i]);
    }

    return 0;
}
