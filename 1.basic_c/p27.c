//convert days into months
#include <stdio.h>

void main() 
{
    int days;
    float months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 29.5;

    printf("\ndays convert into  months is:%f", months);

}