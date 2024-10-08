// Store 5 numbers in array and sort it in ascending order

#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() 
{
    int matrix1[ROWS][COLS] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[ROWS][COLS] = 
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}