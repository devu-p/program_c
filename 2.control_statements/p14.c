//wap to find the largest of three number .

#include <stdio.h>

void main() 
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("\n The largest number is: %d", max);
}
