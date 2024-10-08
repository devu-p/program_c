// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include <stdio.h>

float calculateBill(float units) 
{
    float bill = 0;

    if (units <= 50) 
    {
        bill = units * 0.50;
    }
    else if (units <= 150) 
    {
        bill = 25 + ((units - 50) * 0.75);
    }
    else if (units <= 250) 
    {
        bill = 25 + 75 + ((units - 150) * 1.20);
    }
    else 
    {
        bill = 25 + 75 + 120 + ((units - 250) * 1.50);
    }

    bill *= 1.20;

    return bill;
}

void main() 
{
    float units;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units < 0) 
    {
        printf("Invalid input. Units cannot be negative.");
    } else 
    {
        float totalBill = calculateBill(units);
        printf("Total electricity bill: Rs. %.2f\n", totalBill);
    }

}
