#include <stdio.h>

// Recursive function to calculate nCr
binomialCoeff(int n, int r) 
{
    if (r == 0 || r == n)
        return 1;
    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print spaces for formatting
        for (j = 0; j < n - i - 1; j++)
            printf(" ");

        for (j = 0; j <= i; j++)
            printf("%d ", binomialCoeff(i, j));
        
        printf("\n");
    }

    return 0;
}

