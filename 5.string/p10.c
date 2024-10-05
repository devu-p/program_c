//Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    printf("Enter starting index: ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    if (start < 0 || start >= strlen(str) || length < 1 || start + length > strlen(str)) 
    {
        printf("Invalid start index or length\n");
    } else 
    {
        char substring[length + 1];
        strncpy(substring, str + start, length);
        substring[length] = '\0'; 
        printf("Substring: %s\n", substring);
    }

}
