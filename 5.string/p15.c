// Write a program in C to find the largest and smallest words in a string


#include <stdio.h>
#include <string.h>

void findLargestSmallestWords(char str[]) 
{
    char largest[100] = "";
    char smallest[100] = str;
    char word[100];
    int wordLen = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') 
        {
            word[wordLen++] = str[i];
        } else 
        {
            word[wordLen] = '\0';

            if (strlen(word) > strlen(largest)) 
            {
                strcpy(largest, word);
            }

            if (strlen(word) < strlen(smallest)) 
            {
                strcpy(smallest, word);
            }

            wordLen = 0;
        }
    }

    word[wordLen] = '\0';
    if (strlen(word) > strlen(largest)) 
    {
        strcpy(largest, word);
    }
    if (strlen(word) < strlen(smallest)) 
    {
        strcpy(smallest, word);
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

void main() 
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    findLargestSmallestWords(str);

}
