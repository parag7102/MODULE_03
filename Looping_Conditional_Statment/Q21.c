//21. Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>

int main() {
    int num, reversedNum, remainder, originalNum;
    int count = 0;

    while(count < 3) {
        printf("Enter value: ");
        scanf("%d", &num);

        originalNum = num;
        reversedNum = 0;

        // reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        // palindrome if originalNum and reversedNum are equal
        if (originalNum == reversedNum)
            printf("%d is a palindrome.\n", originalNum);
        else
            printf("%d is not a palindrome.\n", originalNum);

        count++;
    }

    return 0;
}
