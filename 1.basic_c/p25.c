// accept 5 expense from user and find average of expense 

#include <stdio.h>

void main() 
{
    float expense1, expense2, expense3, expense4, expense5, total, average;

    printf("Enter expense 1: ");
    scanf("%f", &expense1);

    printf("Enter expense 2: ");
    scanf("%f", &expense2);

    printf("Enter expense 3: ");
    scanf("%f", &expense3);

    printf("Enter expense 4: ");
    scanf("%f", &expense4);

    printf("Enter expense 5: ");
    scanf("%f", &expense5);

    total = expense1 + expense2 + expense3 + expense4 + expense5;

    average = total / 5;

    printf("Total expenses: %.2f\n", total);
    printf("Average expense: %.2f\n", average);

}