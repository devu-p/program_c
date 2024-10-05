// accept 5 expense from user and find average of expense 

#include <stdio.h>

void main() 
{
    int numExpenses;
    float expense, total = 0, average;

    printf("Enter the number of expenses: ");
    scanf("%d", &numExpenses);

    for (int i = 1; i <= numExpenses; i++) 
    {
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        total += expense;
    }

    average = total / numExpenses;

    printf("Total expenses: %.2f\n", total);
    printf("Average expense: %.2f\n", average);

}
