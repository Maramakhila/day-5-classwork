#include <stdio.h>

int main() {
    int rows, cols, i, j, is_identity = 1;
    int matrix[10][10];

    printf("Input number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Input number of columns for the matrix: ");
    scanf("%d", &cols);

    printf("Input elements in the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // check if matrix is an identity matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != 1) {
                is_identity = 0;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                is_identity = 0;
                break;
            }
        }
    }

    // print the result
    if (is_identity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

