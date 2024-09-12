// Write a program in C to count the total number of alphabets, digits and special characters in a string.


#include <stdio.h>

void countCharacters(char str[]) 
{
    int alphabets = 0, digits = 0, specialChars = 0, spaces = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            alphabets++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        } 
        else if (str[i] == ' ') 
        {
            spaces++;
        } 
        else 
        {
            specialChars++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    printf("Spaces: %d\n", spaces);
}

void main() 

{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countCharacters(str);
}