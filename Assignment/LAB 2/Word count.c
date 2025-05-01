#include <stdio.h>

main() 
{
    char sentence[1000];
    char longestWord[100];
    char currentWord[100];
    int i = 0, wordCount = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse the sentence
    while (1) {
        char ch = sentence[i];

        if (isalnum(ch)) {
            // Building a word
            currentWord[currLen++] = ch;
        } else {
            if (currLen > 0) {
                // End of a word
                currentWord[currLen] = '\0';
                wordCount++;

                if (currLen > maxLen) {
                    maxLen = currLen;
                    strcpy(longestWord, currentWord);
                }

                currLen = 0;
            }

            if (ch == '\0')
                break;
        }

        i++;
    }

    printf("\nTotal number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

}

