//convert kilometers into meters


#include <stdio.h>

void main() {
    float kilometers, meters;


    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("convert kilometers into meters is:%.2f\n", meters);


}
