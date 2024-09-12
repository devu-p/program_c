// convert temperature fahrenheit to celsius

#include <stdio.h>

void main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("Fahrenheit is convert to Celsius:%.2f", celsius);

}