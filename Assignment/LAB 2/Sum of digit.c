#include <stdio.h>

main() {
    int num, original, digit, sum = 0, reverse = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store original number for later display

    // Use absolute value for handling negative numbers
    num = (num < 0) ? -num : num;

    while (num > 0) {
        digit = num % 10;       // Extract last digit
        sum += digit;           // Add to sum
        reverse = reverse * 10 + digit; // Build reversed number
        num /= 10;              // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    // If original number was negative, reverse should also be negative
    if (original < 0) {
        reverse = -reverse;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}

