// WAP to perform Palindrome number using for loop and function

#include <stdio.h>

// Define structure
struct Student 
{
    int rollNo;
    char name[20];
    float marks;
};

// Define union
union Employee 
{
    int empId;
    char name[20];
    float salary;
};

void main() 
{
    // Structure variable
    struct Student student1;
    printf("Structure Memory Allocation:\n");
    printf("Size of struct Student: %lu bytes\n", sizeof(student1));
    printf("Address of rollNo: %p\n", &student1.rollNo);
    printf("Address of name: %p\n", &student1.name);
    printf("Address of marks: %p\n", &student1.marks);

    // Union variable
    union Employee emp1;
    printf("\nUnion Memory Allocation:\n");
    printf("Size of union Employee: %lu bytes\n", sizeof(emp1));
    printf("Address of empId: %p\n", &emp1.empId);
    printf("Address of name: %p\n", &emp1.name);
    printf("Address of salary: %p\n", &emp1.salary);

}