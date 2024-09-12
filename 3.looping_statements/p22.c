//Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>

void main() 
{
    int i = 1;
    while (i <= 3) 
    {
        int num, reverse = 0, remainder, original;

        printf("Enter number %d: ", i);
        scanf("%d", &num);
        original = num;

        while (num != 0) 
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        if (original == reverse)
            printf("%d is a palindrome.\n", original);
        else
            printf("%d is not a palindrome.\n", original);

        i++;
    }
}