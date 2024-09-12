//Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include <stdio.h>

void main() 
{
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    int temp_number = number < 0 ? -number : number;

    while (temp_number > 0) 
    {
        digit = temp_number % 10;  
        sum += digit;              
        temp_number /= 10;         
    }

    printf("\n Summation of digits: %d", -sum);

}