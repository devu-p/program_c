// WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

int main() 
{
    char studentNames[5][100];

    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%s", studentNames[i]); 
    }

    printf("\nStored Student Names:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

}