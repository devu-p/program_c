//WAP program to print below output using for loop 
// 01 02 03 040 50 06 07 08 09 10
// 11 12 13 14 15 16 17 18 19 20
//.
//.
// 42 43 44 45 46 47 48 49 50


#include <stdio.h>

void main() 
{
    int count = 1;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            printf("%02d ", count);
            count++;
        }
        printf("\n");
    }

}