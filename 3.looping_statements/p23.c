//C Program to Reverse a Number Using FOR Loop
//Series Program:

#include <stdio.h>

void main()
 {
    int num, r = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for ( ;num != 0; num /= 10)
    {
        r = r * 10 + num % 10;
    }

    printf("Reversed number: %d\n", r);

}