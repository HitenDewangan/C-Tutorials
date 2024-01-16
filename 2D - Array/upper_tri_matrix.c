#include <stdio.h>

#define MAX_SIZE 10

// Function to check if a matrix is an upper triangular matrix
int isUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            // Check if any element below the principal diagonal is non-zero
            if (matrix[i][j] != 0) {
                return 0; // Not an upper triangular matrix
            }
        }
    }
    return 1; // It is an upper triangular matrix
}

int main() {
    int size;

    // Input: Size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input: Matrix elements
    printf("Enter the elements of the matrix:\n");
    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is upper triangular and print the result
    if (isUpperTriangular(matrix, size)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
