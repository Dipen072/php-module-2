#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);

    // Relational operations
    printf("\nRelational Operations:\n");
    printf("Is %d equal to %d? %d\n", num1, num2, num1 == num2);
    printf("Is %d not equal to %d? %d\n", num1, num2, num1 != num2);
    printf("Is %d greater than %d? %d\n", num1, num2, num1 > num2);
    printf("Is %d less than %d? %d\n", num1, num2, num1 < num2);
    printf("Is %d greater than or equal to %d? %d\n", num1, num2, num1 >= num2);
    printf("Is %d less than or equal to %d? %d\n", num1, num2, num1 <= num2);

    // Logical operations (assuming num1 and num2 are non-zero)
    printf("\nLogical Operations:\n");
    printf("Logical AND (num1 && num2): %d\n", num1 && num2);
    printf("Logical OR (num1 || num2): %d\n", num1 || num2);
    printf("Logical NOT (!num1): %d\n", !num1);
    printf("Logical NOT (!num2): %d\n", !num2);

}

