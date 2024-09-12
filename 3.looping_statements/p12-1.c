//Program of Armstrong Number in C Using For Loop & While Loop

//using for loop

#include <stdio.h>
#include <math.h>

void main() 
{
    int num, r, n = 0, ans = 0,temp;

    printf("Enter an number: ");
    scanf("%d", &num);

    for ( temp = num; temp != 0; ++n) 
    
    {
        temp /= 10;
    }

    for ( temp = num; temp != 0; temp /= 10)
     
     {
        r = temp % 10;
        ans += pow(r, n);
    }


    if (ans == num)
     
     {
        printf("%d is an Armstrong number.\n", num);
    } else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    
}
