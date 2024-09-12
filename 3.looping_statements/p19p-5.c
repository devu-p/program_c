// pattern 5:

// A            
// A B           
// A B C            
// A B C D          
// A B C D E 

#include <stdio.h>

void main() 
{
    int rows = 5; 

    for (int i = 0; i < rows; i++) 
    {
        char ch = 'A'; 
        for (int j = 0; j <= i; j++) 
        {
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }


}
