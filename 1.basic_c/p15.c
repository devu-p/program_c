// Convert school's name in abbreviated form

#include<stdio.h>
void main()
{
   char name[20],last_name[20];
   printf("Enter thr school name \n");
   scanf("%s %s",name,last_name);
   printf("abbreviated name:");
   printf("%c.%c. \n",name[0],last_name[0]);


}