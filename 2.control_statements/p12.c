//wap to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

void main() 
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("\n The maximum number is: %d", max);

}