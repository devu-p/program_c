//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

int main() 
{
    int count = 0;   
    int num;          
    int even_count = 0; 
    int odd_count = 0;  

    while (count < 5) 
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0) 
        {
            even_count++;
        } 
        else 
        {
            odd_count++;
        }

        count++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

}