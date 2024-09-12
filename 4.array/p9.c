// WAP to show difference between Structure and Union

#include <stdio.h>


struct stu 
{
    int rollNo;
    char name[20];
    float marks;
};

union Emp 
{
    int empId;
    char name[20];
    float salary;
};

void main() 
{
    
    struct stu s1;
    printf("Structure Memory Allocation:\n");
    printf("Size of struct str: %lu bytes\n", sizeof(s1));
    printf("Address of rollNo: %p\n", &s1.rollNo);
    printf("Address of name: %p\n", &s1.name);
    printf("Address of marks: %p\n", &s1.marks);


    union Emp e1;
    printf("\nUnion Memory Allocation:\n");
    printf("Size of union Employee: %lu bytes\n", sizeof(e1));
    printf("Address of empId: %p\n", &e1.empId);
    printf("Address of name: %p\n", &e1.name);
    printf("Address of salary: %p\n", &e1.salary);

}




