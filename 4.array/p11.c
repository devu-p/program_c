// WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

int isPalindrome(int num) 
{
    int remainder, reverse = 0, original = num;

    for (; num != 0; num /= 10) 
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }

    return (original == reverse);
}

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome number.\n", num);
    } 
    else 
    {
        printf("%d is not a palindrome number.\n", num);
    }

}