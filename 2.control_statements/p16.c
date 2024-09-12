// write a c program to read temperature in centigrade and display a suitable message according to the  temperature state below 
//temp < 0 then freezing weather
//temp 0-10 then very cold weather 
//temp 10-20 then cold weather 
//temp 20-30 then normal in temp
//temp 30-40 then its hot
//temp >=40 then its very hot 


#include <stdio.h>

void main() {
    float temp;

    printf("Enter temperature in centigrade: ");
    scanf("%f", &temp);

    if (temp < 0) 
    {
        printf(" \n  Freezing weather ");
    } 
    else if (temp >= 0 && temp <= 10) 
    {
        printf("\n Very  Cold weather");
    } 
    else if (temp > 10 && temp <= 20) 
    {
        printf("\n  Cold weather");
    } 
    else if (temp > 20 && temp <= 30) 
    {
        printf("\n Normal  in Temp");
    } 
    else if (temp > 30 && temp <= 40) 
    {
        printf("\n  Its Hot");
    } 
    else  if (temp > 40) 
    {
        printf("\n Its  Very Hot");
    }
    else 
    {
        printf("\n Wrong input");
    }
}

