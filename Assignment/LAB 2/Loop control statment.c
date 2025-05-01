#include <stdio.h>

main() 
{
	int i;
    // Part 1: Print numbers and stop when reaching 5 using break
    printf("Using break statement:\n");
    for(i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Stop the loop when i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Part 2: Print numbers but skip 3 using continue
    printf("Using continue statement (skipping 3):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  // Skip printing the number 3
        }
        printf("%d ", i);
    }
    printf("\n");

}

