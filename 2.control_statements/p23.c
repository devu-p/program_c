//accept month number and display month name


#include <stdio.h>

void main() 
{
    int month_number;

    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number) 
    {
        case 1:
            printf("\n January");
            break;
        case 2:
            printf("\n February");
            break;
        case 3:
            printf("\n March");
            break;
        case 4:
            printf("\n April");
            break;
        case 5:
            printf("\n May");
            break;
        case 6:
            printf("\n June");
            break;
        case 7:
            printf("\n July");
            break;
        case 8:
            printf("\n August");
            break;
        case 9:
            printf("\n September");
            break;
        case 10:
            printf("\n October");
            break;
        case 11:
            printf("\n November");
            break;
        case 12:
            printf("\n December");
            break;
        default:
            printf("\n Invalid month number");
    }

}
