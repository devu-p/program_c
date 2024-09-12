//wap to find number is even or odd using ternary operator

#include <stdio.h>

void main()
{
    int n;

    printf("\nEnter an integer number:");
    scanf("%d", &n);

    (n % 2 == 0)?(printf(" \n This is Even number")):(printf("\n This is Odd number"));

}