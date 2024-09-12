//check number is positive or negative

#include <stdio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) 
    {
        printf("\n num is a positive number.", num);
    } 
    else if (num < 0) 
    {
        printf("\n num is a negative number.", num);
    } 
    else 
    {
        printf("\n num is not positive or negative", num);
    }
}