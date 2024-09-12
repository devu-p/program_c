// WAP to reverse a string and check that the string is palindrome or not 

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int isPalindrome(char str[]) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);
    printf("Reversed String: %s\n", str);

    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

}