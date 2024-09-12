//wap to accept the height of a person in centimeters and categorize the person according to their height
#include <stdio.h>

int main() 
{
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) 
    {
        printf("\nYou are categorized as: Short");
    } 
    else if (height >= 150.0 && height <= 170.0) 
    {
        printf("\nYou are categorized as: Average height");
    } 
    else if (height > 170.0 && height <= 190.0) 
    {
        printf("\nYou are categorized as: Tall");
    } 
    else 
    {
        printf("\nYou are categorized as: Very tall");
    }
}