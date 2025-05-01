#include <stdio.h>

main() 
{
    int A[3][3], B[3][3], Sum[3][3], Product[3][3];
    int i, j, k;

    // Input matrix A
    printf("Enter elements of 3x3 matrix A:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    // Input matrix B
    printf("\nEnter elements of 3x3 matrix B:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    // Add matrices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    // Multiply matrices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            Product[i][j] = 0;
            for (k = 0; k < 3; k++)
                Product[i][j] += A[i][k] * B[k][j];
        }

    // Display Sum
    printf("\nMatrix A + B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", Sum[i][j]);
        printf("\n");
    }

    // Display Product
    printf("\nMatrix A * B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", Product[i][j]);
        printf("\n");
    }

}

