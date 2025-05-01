#include <stdio.h>

// Defining a constant for the program
#define PI 3.14159

main() 
{
    // Declaring variables of different data types
    int age = 25;       // Integer variable
    char grade = 'A';   // Character variable
    float salary = 55000.75;  // Float variable to store salary

    // Display the values of the variables
    printf("Age: %d\n", age);              // Displaying integer
    printf("Grade: %c\n", grade);          // Displaying character
    printf("Salary: %.2f\n", salary);      // Displaying float with 2 decimal places

    // Using the constant PI
    printf("Value of PI: %.5f\n", PI);    // Displaying constant value

}

