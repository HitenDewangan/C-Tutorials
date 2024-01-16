#include <stdio.h>

int main() {
    // User input for the number of rows and columns
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Allocate memory for a 2D array
    int matrix[rows][columns];

    // User input for matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the trace
    if (rows == columns) {
        int trace = 0;
        for (int i = 0; i < rows; ++i) {
            trace += matrix[i][i];
        }
        printf("The trace of the matrix is: %d\n", trace);
    } else {
        printf("Invalid matrix. The number of rows must be equal to the number of columns.\n");
    }

    return 0;
}