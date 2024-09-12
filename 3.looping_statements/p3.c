//wap to take 10 no. Input from user find out below values
// How many even numbers are there
// How many odd numbers are there
// Sum of even numbers
// Sum of odd numbers 

#include <stdio.h>

void main() 
{
    int num[10];
    int eCount = 0, oCount = 0, eSum = 0, oSum = 0;


    printf("Enter 10 num:");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        if (num[i] % 2 == 0) 
        {
            eCount++;
            eSum += num[i];
        } 
        else 
        {
            oCount++;
            oSum += num[i];
        }
    }


    printf("\n Number of even numbers: %d\n", eCount);
    printf("\n Number of odd numbers: %d\n", oCount);
    printf("\n Sum of even numbers: %d\n", eSum);
    printf("\n Sum of odd numbers: %d\n", oSum);

}
