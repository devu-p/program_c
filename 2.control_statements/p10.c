//wap to check whether a number is negative ,positive or zero.

#include <stdio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) 
    {
        printf("\n Num is a positive number.", num);
    } 
    else if (num < 0) 
    {
        printf("\n Num is a negative number.", num);
    } 
    else 
    {
        printf("\n Num is zero.", num);
    }
}