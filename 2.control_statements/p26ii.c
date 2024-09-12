
//ii: Vowel or Consonant using switch case


#include <stdio.h>

void main() 
{
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n %c is a vowel", ch);
            break;
        default:
            printf("\n %c is a consonant", ch);
    }

    
}