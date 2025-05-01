#include<stdio.h>


// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int number;
    clock_t start,end;
    double cpu_time_used;
    unsigned long long result;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }

    // Iterative method
    start = clock();
    result = factorial_iterative(number);
    end = clock();
    cpu_time_used = (double)(end - start);
    printf("\nIterative Factorial of %d = %llu\n", number, result);
    printf("Time taken (iterative): %f seconds\n", cpu_time_used);

    // Recursive method
    start = clock();
    result = factorial_recursive(number);
    end = clock();
    cpu_time_used = (double)(end - start);
    printf("\nRecursive Factorial of %d = %llu\n", number, result);
    printf("Time taken (recursive): %f seconds\n", cpu_time_used);

}

