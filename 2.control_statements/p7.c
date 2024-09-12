//accept marks from user and check pass or fail

#include <stdio.h>

void main() 
{
    int marks;

    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 33) 
    {
        printf("\nYou have passed");
    } 
    else 
    {
        printf("\n You have failed . Better luck next time ");
    }

}