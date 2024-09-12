//1 2 3 6 9 18 27 54...

#include <stdio.h>

void main() 
{
    int n, t = 1, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
    {
        printf("%d ", t);
        if (i % 3 == 1) 
        {
            t *= 1;
        } 
        else if (i % 3 == 2) 
        {
            t *= 2;
        } 
        else 
        {
            t *= 3;
        }
    }

    
}
