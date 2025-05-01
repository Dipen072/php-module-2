#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
isStringPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // This reads input without spaces. (If you want spaces too, we can use fgets.)

    if (isStringPalindrome(str))
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);
}

