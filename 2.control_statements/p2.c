//write a c program to read the value of an integer m and display the value of m is 1 when m is larger than 0,0 when 0 is -1 when m is less than 0

#include <stdio.h>

void main() 
{
    int m;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m > 0) 
    {
        printf("\n The value of m is: 1");
    } 
    else if (m == 0) 
    {
        printf("\n The value of m is: 0");
    } 
    else 
    {
        printf("\n The value of m is: -1");
    }
}