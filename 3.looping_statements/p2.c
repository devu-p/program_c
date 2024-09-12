//Wap to accept 5 numbers from user and display all numbers

#include <stdio.h>

void main() 
{
    int numbers[5]; 

    printf("\n Enter 5 numbers:");
    for (int i = 0; i < 5; i++) 
    {
        printf("\n Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered:");
    for (int i = 0; i < 5; i++) 
    {
        printf("\n Number %d: %d", i + 1, numbers[i]);
    }
}

