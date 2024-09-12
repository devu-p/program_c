//write a c program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

int main() 
{
    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2);

    printf("Enter third angle: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("A triangle can be formed with these angles.\n");
    } else {
        printf("A triangle cannot be formed with these angles.\n");
    }
}