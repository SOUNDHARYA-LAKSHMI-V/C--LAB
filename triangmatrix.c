#include <stdio.h>

int main() {
    int rows, cols,i,j,matrix[10][10],low=0,up=0;
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
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i)
                up=matrix[i][j];
           
            if(i >= j)
                 low=matrix[i][j];
        }
    }
    printf("Sum of upper triangular matrix:%d/n",up);
    printf("Sum of lower triangular matrix:%d/n",low);

    return 0;
}

