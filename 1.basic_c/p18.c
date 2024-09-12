// calculator person's annual salary

#include<stdio.h>
void main()
{
    float monthly_sal,annual_sal;
    printf("enter monthly salary :");
    scanf("%f",&monthly_sal);

    annual_sal=monthly_sal*12;

    printf("annual salary is:%f",annual_sal);

}