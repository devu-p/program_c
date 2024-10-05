//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include <stdio.h>
#include <string.h>

void main() {
    char sentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    printf("Original Sentence: %s\n", sentence);

    for (int i = 0; sentence[i]; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - 32;
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] + 32;
        }
    }

    printf("Modified Sentence: %s\n");
}

