// Write a program in C to remove characters from a string except alphabets

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Original String: %s\n", str);

    int i, j = 0;
    char newStr[100];
    for (i = 0; str[i]; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            newStr[j++] = str[i];
        }
    }
    newStr[j] = '\0';

    printf("Modified String: %s\n", newStr);

    return 0;
}
