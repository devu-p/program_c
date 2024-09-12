//c program to check uppercase or lowercase or digit or special character

#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("\n This is an uppercase letter.", ch);
    } 
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n This is a lowercase letter.", ch);
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        printf("\n This is a digit.", ch);
    }
    else 
    {
        printf("\n This is a special character.", ch);
    }
}