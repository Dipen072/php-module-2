#include <stdio.h>

main() {
    int num, start, end, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Optional: Handle invalid range
    if (start > end) {
        printf("Invalid range! Start must be less than or equal to end.\n");
    }

    printf("Multiplication table of %d from %d to %d:\n", num, start, end);
    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

