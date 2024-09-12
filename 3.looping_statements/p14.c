//Accept 5 numbers from user and find those numbers factorials


#include <stdio.h>

void main() 
{
    int numbers[5],factorial;
    int i, j;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        factorial = 1;
        for (j = 1; j <= numbers[i]; j++) 
        {
            factorial *= j;
        }
        printf("Factorial of %d is %llu\n", numbers[i], factorial);
    }

}