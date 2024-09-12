// accept the number of students from user. I need to give five apples to each student. How many apples are required?

#include<stdio.h>
void main()
{
    int stud,total_apples;
    int apples=5;
     
     printf("enter no. of stud:");
     scanf("%d",&stud);
     
     total_apples = stud*apples;

     printf("total apples required:%d",total_apples);

}