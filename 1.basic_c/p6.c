//find area of triangle formula:a=1/2*b*h

#include<stdio.h>
void main()
{
    int b,h,area;
    printf("Enter the length of base:");
    scanf("%d",&b);
    printf("Enter the length of height:");
    scanf("%d",&h);
    area=0.5*b*h;
    printf("area of triangle is: %d",area);
}
