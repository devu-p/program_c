// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and
//without using 3rd variable

// swap using 3rd variable
#include<stdio.h>
void main()
{
    int a ,b , swap ,i ,j;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    swap=a;
    a=b;
    b=swap;
    printf("\n after swap the value:a=%d",a);
    printf("\n after swap the value:b=%d",b);


//swap without using 3rd variable
printf("\n------swap without using 3rd variable------");

printf("\nenter the value of i");
scanf("%d",&i);
printf("\nenter the value of j");
scanf("%d",&j);
i=i+j;
j=i-j;
i=i-j;
printf("\n after swap the value:i=%d",i);
printf("\n after swap the value:j=%d",j);
}
