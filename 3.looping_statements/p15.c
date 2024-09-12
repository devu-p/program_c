//Calculate sum of 10 numbers using of while loop

#include <stdio.h>

void main() 
{
    int i = 1, num, sum = 0;

    printf("Enter 10 numbers:\n");
    while (i <= 10) 
    {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num; 
        i++;
    }

    printf("\nSum of 10 numbers: %d\n", sum);

}

