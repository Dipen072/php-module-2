#include <stdio.h>

main() 
{
    int num = 20;
    int *ptr;  // Pointer declaration

    ptr = &num;  // Pointer points to the address of num

    printf("Original value of num: %d\n", num);

    // Using pointer to modify the value
    *ptr = 40;

    printf("Modified value of num using pointer: %d\n", num);

}

