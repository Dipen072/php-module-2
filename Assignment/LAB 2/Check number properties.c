#include <stdio.h>

int main() 
{
    int num;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // Checking if the number is positive, negative, or zero
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    // Checking if the number is a multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else {
        printf("%d is not a multiple of both 3 and 5.\n", num);
    }
}

