 //Wap to print Fibonacci series up to given numbers


#include <stdio.h>

void main() 
{
    int n, num1 = 0, num2 = 1, nextTerm;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: ", n);
    printf("%d %d ", num1, num2);

    nextTerm = num1 + num2;
    while (nextTerm <= n) 
    {
        printf("%d ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }
    printf("\n");

}

