/* 8. WAP to accept the height of a person in centimeters 
      and categorize the person according to their height. */
#include <stdio.h>

int main() {
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("You are short.\n");
    } else if (height < 170.0) {
        printf("You are average height.\n");
    } else {
        printf("You are tall.\n");
    }

    return 0;
}
