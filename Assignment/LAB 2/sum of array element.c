#include <stdio.h>

main() 
{
    int N, i;
    float sum = 0, average;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare array with max size check
    if (N <= 0 || N > 1000) {
        printf("Invalid size. Please enter a number between 1 and 1000.\n");
        return 1;
    }

    int arr[N];  // Variable Length Array (VLA)

    // Input elements
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / N;

    // Output results
    printf("\nSum of the elements = %.2f\n", sum);
    printf("Average of the elements = %.2f\n", average);
}

