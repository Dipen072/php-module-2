#include <stdio.h>

// Function to reverse a string in-place
reverseString(char str[]) {
    int start = 0, end = 0;

    // Manually find the length of the string
    while (str[end] != '\0' && str[end] != '\n') {
        end++;
    }

    end--; // Move to the last valid character (excluding newline)

    // Swap characters from start to end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

main() 
{
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Using fgets to allow spaces

    reverseString(input);

    printf("Reversed string: %s", input);
}

