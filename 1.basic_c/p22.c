//calculate compound interest (compound interest formula:)
//a. formula to calculate compound interest annually is given by :
// amount = p(1+r/100)t 
//b. compound interest =amount -p 

#include<stdio.h>
#include<math.h>
void main()
{
    float interest ,amount,p,r,t;
    printf("enter the value of p:");
    scanf("%f",&p);
    printf("enter the value of r:");
    scanf("%f",&r);
    printf("enter the value of t:");
    scanf("%f",&t);
    amount=p*pow((1+r/100),(t));
    printf("\nthis is amount:%f",amount);
    interest=amount - p;
    printf("\ncompound interest:%f",interest);

}