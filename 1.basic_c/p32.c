//accept 2 numbers and find out its sum check it size 


#include <stdio.h>

void main() 
{
    int n1, n2, sum;

    
    printf("Enter the first no.: ");
    scanf("%d", &n1);

    printf("Enter the second no.: ");
    scanf("%d", &n2);

        sum = n1 + n2;

    printf("\nSum is :%d", sum);

    printf("\nSize of the sum is:%d", sizeof(sum));
}
