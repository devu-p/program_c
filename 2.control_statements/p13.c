//wap to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

void main() 
{
    int a, b, c, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    printf("\n The minimum number is: %d", min);
}
