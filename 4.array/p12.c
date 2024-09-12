//WAP to accept 5 students name and store it in array

#include <stdio.h>

#define SIZE 5

void main() 
{
    int numbers[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers in reverse order:\n");
    for (int i = SIZE - 1; i >= 0; i--) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

}