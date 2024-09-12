//Write a program in C to compare two strings without using string library functions.


#include <stdio.h> 

int main() 
{  

    char str1[100], str2[100];  
    
    int i = 0;  

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    
    if (str1[i] == str2[i] && str1[i] != '\0') 
    {
        i++;
        printf("Both strings are the same.\n");
    } 
    else
    {
        printf("Both strings are the not same.\n");
    }
}