// accept 5 employees name and salary and count average and total salary 


#include<stdio.h>

void main()
 {
    int n = 5;  
    float total_sal = 0, average;
    char employee_nm[100];
    float employee_sal;

    for(int i = 1; i <= n; i++)
     {
        printf("\nEnter employee %d name: ", i);
        scanf("%s", employee_nm);
        printf("Enter employee %d salary: ", i);
        scanf("%f", &employee_sal);

        total_sal += employee_sal;
    }

    average = total_sal / n;

    printf("\nTotal salary of employees: %.2f", total_sal);
    printf("\nAverage salary of employees: %.2f", average);
}
