//find the character is vowel or not

#include <stdio.h>
 

void main()
{
    char ch;
     printf("Enter ch value:");
     scanf("%c",&ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') 
    {
 
        printf("\nThe character %c is a vowel", ch);
    }
    else 
    {
        printf("\n The character %c is a consonant", ch);
    }
}
