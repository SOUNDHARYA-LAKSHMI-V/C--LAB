#include <stdio.h>

int main() {
    int rows, cols,i,j,matrix[10][10];
    printf("Enter the number of rows and columns (must be square matrix): ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols) {
        printf("Matrix should be square (rows = columns)!");
    }
    else{
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nUpper Triangular Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i)
                printf("%d ", matrix[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nLower Triangular Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i >= j)
                printf("%d ", matrix[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    }

    return 0;
}

