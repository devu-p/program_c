//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

void main() 
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum += i * i;  
    }

    printf("The sum of the series (1*1) + (2*2) + ... + (%d*%d) is: %d\n", n, n, sum);

    
}