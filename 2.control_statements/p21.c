// Write a c program to input basic salary of an employee and calculates Gross salary according to following:   
//Basic salary <=10000: HRA = 20%,DA = 80%
//Basic salary <=20000: HRA = 25%,DA = 90%
//Basic salary <=20000: HRA = 30%,DA = 95%

#include <stdio.h>

void main() {
    float basic_salary, hra, da, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) 
    {
        hra = basic_salary * 0.20;
        da = basic_salary * 0.80;
    } 
    else if (basic_salary <= 20000) 
    {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.90;
    } 
    else 
    {
        hra = basic_salary * 0.30;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;

    printf(" \n Basic Salary: %.2f", basic_salary);
    printf(" \n HRA: %.2f", hra);
    printf(" \n DA: %.2f", da);
    printf(" \n Gross Salary: %.2f", gross_salary);

}
