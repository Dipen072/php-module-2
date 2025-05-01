#include <stdio.h>

main() 
{
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];  // Add element to sum
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);
}

