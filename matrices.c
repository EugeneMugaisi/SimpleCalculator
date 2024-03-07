#include <stdio.h>

#define SIZE 3

void multiplyMatrix(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter the values for the matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("Enter value for element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];

    printf("Enter values for the first matrix:\n");
    inputMatrix(firstMatrix);

    printf("Enter values for the second matrix:\n");
    inputMatrix(secondMatrix);

    int resultMatrix[SIZE][SIZE];

    multiplyMatrix(firstMatrix, secondMatrix, resultMatrix);

    printf("\nFirst Matrix:\n");
    displayMatrix(firstMatrix);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix);

    return 0;
}
