// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)


#include <stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;

    do 
    {
        printf("\n Menu:");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");
        printf("\n Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) 
        {
            break;
        }


        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) 
        {
            case 1: 
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2: 
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3: 
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4: 
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    printf("\n Result: %.2f", result);
                } else 
                {
                    printf("\n Error: Division by zero is not allowed.");
                }
                break;
        }
    } while (choice != 5);

    printf("\n Exiting...\n");
    return 0;
}