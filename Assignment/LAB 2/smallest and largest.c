#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // First assume num1 is largest and smallest
    largest = num1;
    smallest = num1;

    // Find the largest
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    // Find the smallest
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    // Using switch to display
    switch (1) {
        case 1:
            printf("Largest number: %d\n", largest);
            printf("Smallest number: %d\n", smallest);
            break;
        default:
            printf("Something went wrong.\n");
    }

    return 0;
}

