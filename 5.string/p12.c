//Write a program in C to find the number of times a given word 'is' appears in the given string.


#include <stdio.h>
#include <string.h>

int countWordOccurrences(char str[], char word[]) {
    int count = 0;
    int len = strlen(word);
    int i;

    for (i = 0; i <= strlen(str) - len; i++) {
        if (strncmp(str + i, word, len) == 0) {
            // Check for word boundaries
            if (i == 0 || str[i - 1] == ' ') {
                if (i + len == strlen(str) || str[i + len] == ' ') {
                    count++;
                }
            }
        }
    }

    return count;
}

void main() 
{
    char str[100];
    char word[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Enter word to search: ");
    scanf("%s", word);

    int occurrences = countWordOccurrences(str, word);
    printf("Word '%s' appears %d times.\n", word, occurrences);

}



