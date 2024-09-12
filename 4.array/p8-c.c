//b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage



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

    struct Employee emp[5];


    for (int i = 0; i < 5; i++) {
        printf("Enter Employee %d Details:\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].empNo);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].empName);
        printf("Enter Employee Address: ");
        scanf("%s", emp[i].address);
        printf("Enter Employee Age: ");
        scanf("%d", &emp[i].age);
    }


    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", emp[i].empNo);
        printf("Employee Name: %s\n", emp[i].empName);
        printf("Employee Address: %s\n", emp[i].address);
        printf("Employee Age: %d\n\n", emp[i].age);
    }


}