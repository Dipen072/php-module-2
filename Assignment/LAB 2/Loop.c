#include <stdio.h>

main() 
{
	int j;
    // Part 1: Using while loop
    printf("Using while loop:\n");
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Part 2: Using for loop
    printf("Using for loop:\n");
    for (j = 1; j <= 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Part 3: Using do-while loop
    printf("Using do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    printf("\n");

}

