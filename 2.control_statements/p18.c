//write a c program to calculate profit and loss on a transaction .

#include <stdio.h>

int main() 
{
    float cp, sp, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) 
    {
        profit = sp - cp;
        printf("Profit: %.2f\n", profit);
    } 
    else
    {
        loss = cp - sp;
        printf("Loss: %.2f\n", loss);
    }
}
