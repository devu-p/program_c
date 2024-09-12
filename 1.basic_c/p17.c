// calculate person's insurance premium based on salary

#include<stdio.h>
void main()
{
    float salary, insurance, ins_Premium;

    printf("Enter the salary: ");
    scanf("%f", &salary);
    printf("Enter the insurance : ");
    scanf("%f", &insurance);

    insurance /= 100;

    ins_Premium = salary * insurance;

    printf("The insurance premium is: %.2f\n", ins_Premium);


}
