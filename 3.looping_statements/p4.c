//Wap to print table up to given numbers

#include <stdio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d:", num);
    for (int i = 1; i <= 10; i++) {
        printf("\n %d x %d = %d", num, i, num * i);
    }

}

