// write a c program to accept two integers and check whether they are equal or not 

#include <stdio.h>

void main() 
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) 
    {
        printf("\n This numbers are equal.");
    } 
    
    else 
    {
        printf("\n This numbers are not equal.");
    }


}