#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3]; // Array of 3 structures
    int i;

    // Input details for each student
    printf("Enter details of 3 students:\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]%*c", students[i].name);  // Read string with spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the student details
    printf("\nDisplaying Student Details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

