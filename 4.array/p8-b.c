//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address andage


#include <stdio.h>

struct Employee 
{
    int empNo;
    char empName[100];
    char address[200];
    int age;
};

void main() 
{
    struct Employee emp;

    printf("Enter Employee Number: ");
    scanf("%d", &emp.empNo);
    printf("Enter Employee Name: ");
    scanf("%s", emp.empName);
    printf("Enter Employee Address: ");
    scanf("%s", emp.address);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);

}


