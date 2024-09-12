//convert minutes into seconds and hours

#include <stdio.h>

void main() {
    float minutes, seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%f", &minutes);

    seconds = minutes * 60;

    hours = minutes / 60;

    printf("minutes is convert into second is :%.2f\n", seconds);
    printf("minutes is convert into hours is :%.2f\n", hours);

}
