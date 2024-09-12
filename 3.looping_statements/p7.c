// Wap to print numbers in reverse order e.g.:number=64728--->reverse 82746

#include <stdio.h>

void main() 
{

    int n, reverse = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
     
     {
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    
}
