// Write a program in C to count the total number of words in a string.


#include<stdio.h>
#include<string.h>
 
void main() 
{
    char str[100];
    int len;
    
    printf("\nEnter the String : ");
    scanf("%s",str);
    
    len = strlen(str);
    
    printf("\nLength of the given string is %d", len);
}