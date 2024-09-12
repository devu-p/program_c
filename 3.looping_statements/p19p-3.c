//pattern 3:
//        * 
//      * * * 
//    * * * * * 
//  * * * * * * * 
//* * * * * * * * *
#include<stdio.h>
void main()
{

    int a = 1;
    for (int j = 1; j <= 10; j += 2)
    {
        for (int i = 4; i >= a; i--)
        {
            printf("  ");
        }
        a++;

        for (int k = 1; k <= j; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

}