//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)


#include <stdio.h>

void main() 
{
    int number, max_digit = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) 
     {
        remainder = number % 10; 
        if (remainder > max_digit) 
        {
            max_digit = remainder; 
        }
        number = number / 10; 
    }

    printf("Max digit is %d\n", max_digit);

}