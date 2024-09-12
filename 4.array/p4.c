// WAP to find factorial using recursion

#include<stdio.h>

int fact (int);

void main()

{
    int n,f;
    printf("\n enter any value:");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial is:%d",f);
}
int fact (int num)
{
    int f;
    if(num==1)
        return 1;
    else
    {
        f=num*fact(num-1);
    
    }
    return (f);

}