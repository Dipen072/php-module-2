#include <stdio.h>

main() 
{
    FILE *fp;
    char str[100];
    char ch;

    // Step 1: Create and open the file in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);  // Read a line with spaces
    fprintf(fp, "%s", str);  // Write the string to the file

    fclose(fp);  // Step 2: Close the file after writing

    // Step 3: Open the file again in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    printf("\nContents of the file:\n");

    // Step 4: Read and display the file content
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp); // Step 5: Close the file after reading

}

