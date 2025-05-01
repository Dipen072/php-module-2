#include <stdio.h>


main() 
{
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove trailing newline character if present
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display the concatenated string
    printf("\nConcatenated String: %s\n", str1);

    // Display the length
    printf("Length of concatenated string: %lu\n", strlen(str1));

}

