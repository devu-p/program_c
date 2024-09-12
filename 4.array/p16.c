// Accept 5 numbers from user and perform sum of array

#include <stdio.h>

void main() 
{
    int arr[5],i, sum = 0;

    
    printf("Enter 5 numbers:\n");
    for( i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }


    for( i = 0; i < 5; i++) 
    {
        sum = sum + arr[i];
    }

    
    printf("Sum of the array elements: %d\n", sum);

}
