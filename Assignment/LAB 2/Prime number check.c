#include <stdio.h>

main() 
{
    int limit, num, i, isPrime;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Prime numbers between 1 and %d are:\n", limit);

    for (num = 2; num <= limit; num++) {
        isPrime = 1;  // Assume num is prime

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

