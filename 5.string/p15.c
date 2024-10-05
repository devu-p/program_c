// Write a program in C to find the largest and smallest words in a string


#include <stdio.h>
#include <string.h>

void main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Original String: %s\n", str);

    char largest[100] = "";
    char smallest[100] = "";

    int largestLen = 0;
    int smallestLen = 100; 

    char* token = strtok(str, " ");

    while (token != NULL) {
        int len = strlen(token);

        if (len > largestLen) {
            strcpy(largest, token);
            largestLen = len;
        }

        if (len < smallestLen) {
            strcpy(smallest, token);
            smallestLen = len;
        }

        token = strtok(NULL, " ");
    }

    printf("Largest Word: %s\n", largest);
    printf("Smallest Word: %s\n", smallest);

}
