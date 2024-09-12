// Write a program in C to separate individual characters from a string.


#include <stdio.h>
#include <string.h>

void main() 
{
   char str[90]=" ";
    int l=0;

    printf("Enter a string: ");
    scanf("%s",str);
    while (str[l]!='\0')
    {
        printf("%c ",str[l]);
        l++;
    }
}