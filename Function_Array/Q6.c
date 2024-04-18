//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

#define SIZE 3  


void add(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            C[i][j] = A[i][j] + B[i][j];
}


void subtract(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            C[i][j] = A[i][j] - B[i][j];
}


void multiply(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}


void printMatrix(int M[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    printf("Adding matrices...\n");
    add(A, B, C);
    printMatrix(C);

    printf("Subtracting matrices...\n");
    subtract(A, B, C);
    printMatrix(C);

    printf("Multiplying matrices...\n");
    multiply(A, B, C);
    printMatrix(C);

    return 0;
}
