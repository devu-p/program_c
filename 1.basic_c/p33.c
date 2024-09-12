//c program to read integer and print first  three powers(n^1,n^2,n^3)

#include <stdio.h>

void main() 
{
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("N^1 = %d\n", N);
    printf("N^2 = %d\n", N * N);
    printf("N^3 = %d\n", N * N * N);
}