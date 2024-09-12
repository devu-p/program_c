// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>

void main() 
{
    int n, total_sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int current_sum = 0;
        
        for (int j = 1; j <= i; j++) 
        {
            current_sum += j;
        }

        total_sum += current_sum;
    }

    printf("The sum of the series (1) + (1+2) + ... + (1+2+...+%d) is: %d\n", n, total_sum);

}