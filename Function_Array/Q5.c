/*5. WAP to take two Array input from user and sort them in ascending 
     or descending order as per user’s choice */
#include <stdio.h>

void sort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, choice;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending order, 0 for descending order: ");
    scanf("%d", &choice);

    sort(arr1, n1, choice);
    sort(arr2, n2, choice);

    printf("Sorted first array: ");
    printArray(arr1, n1);
    printf("Sorted second array: ");
    printArray(arr2, n2);

    return 0;
}
