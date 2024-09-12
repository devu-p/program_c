//find circumference of triangle formula:triangle=a+b+c
 
#include<stdio.h>
void main()
{
    int a,b,c,triangle;
    printf("Enter the length of a:");
    scanf("%d",&a);
    printf("Enter the length of b:");
    scanf("%d",&b);
    printf("Enter the length of c:");
    scanf("%d",&c);
    triangle=a+b+c;
    printf("circumference of triangle: %d",triangle);
}