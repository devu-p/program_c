//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include <stdio.h>
#include<string.h>

void main()
{
    char str[20];
    int i;
    printf("\n Enter the string:-");
    scanf("%s",str);
    printf("\n Given string: %s",str);
    for(i=0;i<=strlen(str);i++)
    {
    if (str[i]>=97 && str[i]<=122)
    str[i]=str[i] - 32;
    
    printf("\n string is in Upper Case: %s",str);
    }
}
