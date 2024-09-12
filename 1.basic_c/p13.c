//Find character value from ascii

#include<stdio.h>
void main()
{
    int number;
    char ch;
    printf("Enter the ascii value:");
    scanf("%d",&number);
    ch = (char)number;
    printf("This is character:%c",ch);
}