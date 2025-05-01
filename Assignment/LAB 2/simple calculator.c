#include <stdio.h>

main() 
{
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline character

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        case '%':
            if ((int)num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = (int)num1 % (int)num2;
                printf("Result: %.0lf\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

}

