//calculate the Factorial of a Given Number using while loop


#include <stdio.h>

void main() 
{
    int num, factorial = 1;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        factorial *= num;  
        num--;             
    }

    printf("Factorial is %d\n", factorial);

}