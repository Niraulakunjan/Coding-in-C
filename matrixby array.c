#include <stdio.h>
#include<matr.h>

int main() {
    int matrix[3][3]; // Declare a 3x3 matrix
    int i, j;

    // Input elements in the matrix
    printf("Enter elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the 3x3 matrix
    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
