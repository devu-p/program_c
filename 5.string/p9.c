//Write a program in C to find the maximum number of characters in a string

#include <stdio.h>

void maxCharacter(char str[]) 
{
    int count[256]={0};
    int i;
    char maxChar;
    int maxCount = 0;

    for (i = 0; str[i] != '\0'; i++) 
    {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character: %c \n", maxChar, maxCount);
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    maxCharacter(str);

}