// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters in reverse order:\n");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
}