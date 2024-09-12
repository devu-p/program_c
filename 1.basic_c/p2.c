//Write a program to make simple calculator (to make addition, subtraction,multiplication,
//division and modulo)

#include<stdio.h>
void main()
{
    int n1,n2;
    float ans;
    printf("Enter the n1:");
    scanf("%d",&n1);

    printf("\nEnter the n2:");
    scanf("%d",&n2);

    ans=n1+n2;
    printf("\nanswer of add is %d + %d =%d",n1,n2,(int)ans);


    ans=n1-n2;
    printf("\nanswer of sub is %d - %d =%d",n1,n2,(int)ans);


    ans=n1*n2;
    printf("\nanswer of mul is %d * %d =%d",n1,n2,(int)ans);


    ans=(float)n1/n2;
    printf("\nanswer of div is %d / %d =%d",n1,n2,(float)ans);


    ans=n1%n2;
    printf("\nanswer of modulo is %d % %d =%d",n1,n2,(float)ans);
}