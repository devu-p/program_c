//find the area of a rectangle prism formula:a=2(wl+hl+hw)

#include<stdio.h>
void main()
{
    int w,l,h,surface_area;
    printf("Enter the  width:");
    scanf("%d",&w);
    printf("Enter the hight:");
    scanf("%d",&h);
    printf("Enter the length :");
    scanf("%d",&l);
    surface_area =2*(w*l+h*l+h*w);
    printf("area of rectangle prism: %d",surface_area);
}
