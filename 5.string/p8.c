//Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>

void countVowelsConsonants(char str[]) 
{
    int vowels = 0, consonants = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
                {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countVowelsConsonants(str);

}