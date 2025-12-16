#include <stdio.h>

int main() {
    int rows, cols;

    printf("==== MATRTX ADDITION ====\n");
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    // Input first matrix
    printf("\n----- ENTER FIRST MATRIX -----\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);

        }
    }
    // Input Matrix 2
    printf("\n----- EENTER SECOND MATRIX -----\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j );
            scanf("%d", &matrix2[i][j]);
        }
    }

    //Add Matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display Matrices
    printf("\n==== MATRIX1 ====\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n==== MATRIX2 ====\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("%4d ", matrix2[i][j]);

        }
        printf("\n");
    }

    printf("\n==== RESULT (Matrix1 + Matrix2) ====\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}