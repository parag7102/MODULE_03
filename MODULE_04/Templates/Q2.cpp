/*2. Write a program of to sort the array using templates */
#include<iostream>
using namespace std;


template <typename T>
void sortArray(T arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


template <typename T>
void printArray(T arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr1[] = {5, 2, 8, 9, 1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Original integer array: ";
    printArray(arr1, n1);
    sortArray(arr1, n1);
    cout << "Sorted integer array: ";
    printArray(arr1, n1);

    double arr2[] = {2.2, 1.1, 4.4, 3.3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "Original double array: ";
    printArray(arr2, n2);
    sortArray(arr2, n2);
    cout << "Sorted double array: ";
    printArray(arr2, n2);

    return 0;
}
