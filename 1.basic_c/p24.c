// accept 5 employees name and salary and count average and total salary 

#include<stdio.h>
void main()
{
    float e1_sal,e2_sal,e3_sal,e4_sal,e5_sal,total_sal,average;
    char e1_nm,e2_nm,e3_nm,e4_nm,e5_nm;
    printf("\nenter first employee name:");
    scanf("%s",&e1_nm);
    printf("\nenter first employee salary");
    scanf("%f",&e1_sal);

    printf("\nenter second employee name:");
    scanf("%s",&e2_nm);
    printf("\nenter second employee salary");
    scanf("%f",&e2_sal);

    printf("\nenter third employee name:");
    scanf("%s",&e3_nm);
    printf("\nenter third employee salary");
    scanf("%f",&e3_sal);

    printf("\nenter forth employee name:");
    scanf("%s",&e4_nm);
    printf("\nenter forth employee salary");
    scanf("%f",&e4_sal);

    printf("\nenter fifth employee name:");
    scanf("%s",&e5_nm);
    printf("\nenter fifth employee salary");
    scanf("%f",&e5_sal);

    total_sal=e1_sal+e2_sal+e3_sal+e4_sal+e5_sal;
    printf("\nthis is total salary of employees :%f",total_sal);
    average=total_sal/5;
    printf("\naverage salary of employees:%f",average);

}