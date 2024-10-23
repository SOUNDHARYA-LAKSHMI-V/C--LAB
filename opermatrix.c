#include <stdio.h>
int main()
{
    int row,col,mat1[10][10],mat2[10][10],choice,i,j,k,result[10][10];
    printf("Enter number of rows:");
    scanf("%d",&row);
    printf("Enter number of column:");
    scanf("%d",&col);
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nChoose operation:(+,-,*,/)");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    result[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
            printf("\nResult of addition:\n");
            for ( i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    result[i][j] = mat1[i][j] - mat2[i][j];
                }
            }
            printf("\nResult of subtraction:\n");
            for ( i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            for (i = 0; i < row; i++) {
             for(j=0;j<col;j++){
    
                    result[i][j] = 0;
                for (k= 0; k < col; k++) {


                        result[i][j] += mat1[i][k] * mat2[k][j];

                }
            }
}
            printf("\nResult of multiplication:\n");
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                     if(mat2[i][j]!=0)
                        result[i][j] = mat1[i][j] / mat2[i][j];
                    }
                }

            printf("\nResult of division (element-wise):\n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

