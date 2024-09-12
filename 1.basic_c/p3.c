//wap to find area and circumference of circle

#include<stdio.h>
#include<math.h> 
void main()
{
    int r;
    float area,cir , pi=3.14;
    printf("Enter num of r:");
    scanf("%d",&r);
    area=pi*r*r;
    cir=2*pi*r;
    printf("The area is =%f",area);
    printf("\n the cir is=%f",cir);
}