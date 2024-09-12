// Write a program in C to remove characters from a string except alphabets


#include <stdio.h>

void removeNonAlphabets(char str[]) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0'; 
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    removeNonAlphabets(str);

    printf("String after removing non-alphabets: %s\n", str);

}
