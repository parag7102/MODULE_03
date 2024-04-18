//15. Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int numbers[5];  

    
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    
    sort(numbers, 5);

    
    printf("Numbers in ascending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
