// convert years into days and months

#include <stdio.h>

void main() 
{
    int years, days, months;

    printf("Enter number of years: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365;

    printf("\nconvert year into days:%d", days);
    printf("\nconvert years into months:%d",months);

}
