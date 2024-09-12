//wap to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
void main()
{
int i,j; 
printf("\nenter the value of i");
scanf("%d",&i);
printf("\nenter the value of j");
scanf("%d",&j);
i=i*j;
j=i/j;
i=i/j;
printf("\n after swap the value:i=%d",i);
printf("\n after swap the value:j=%d",j);
}