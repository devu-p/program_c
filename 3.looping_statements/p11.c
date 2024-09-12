//Accept 5 names from user at run time.

#include <stdio.h>

 void main() 
 {
    char names[5][100];  

    printf("\n Enter 5 names:");

    for (int i = 0; i <5; i++) 
    {
        printf("\n Enter name %d: ", i + 1);
        scanf("%s", names[i]);  
    }

    printf("\nThe names you entered are:\n ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%s\n", names[i]);
    }

}