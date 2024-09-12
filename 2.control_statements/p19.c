// program 19


#include <stdio.h>

void main() 
{
    int customerID;
    char name[50];
    float unitsConsumed, billAmount = 0.0, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", &name);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    if (unitsConsumed < 350) 
    {
        billAmount = unitsConsumed * 1.20;
    } 
    else if (unitsConsumed >= 350 && unitsConsumed < 600) 
    {
        billAmount = unitsConsumed * 1.50;
    } 
    else if (unitsConsumed >= 600 && unitsConsumed < 800) 
    {
        billAmount = unitsConsumed * 1.80;
    } 
    else 
    {
        billAmount = unitsConsumed * 2.00;
    }

    if (billAmount > 800) 
    {
        surcharge = billAmount * 0.18;
        billAmount += surcharge;
    }

    if (billAmount < 256) 
    {
        billAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("-----------------------------\n");
    printf("\n  Customer ID      : %d", customerID);
    printf("\n  Customer Name    : %s", name);
    printf("\n  Units Consumed   : %.2f", unitsConsumed);
    printf("\n Total Bill Amount : Rs. %.2f", billAmount);

}