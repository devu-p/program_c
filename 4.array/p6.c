// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array


#include <stdio.h>

#define ROW 3  
#define COL 3  
// Function to add two matrices
void addMatrices(int A[ROW][COL], int B[ROW][COL], int result[ROW][COL]) 
{
    for (int i = 0; i < ROW; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int A[ROW][COL], int B[ROW][COL], int result[ROW][COL]) 
{
    for (int i = 0; i < ROW; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[ROW][COL], int B[ROW][COL], int result[ROW][COL]) 
{
    for (int i = 0; i < ROW; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            for (int k = 0; k < COL; k++) 
            {
                result[i][j] += A[i][j] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[ROW][COL]) 
{
    for (int i = 0; i < ROW; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    // Predefined matrices
    int A[ROW][COL] = 
    {
        
        {1, 2, 3},  
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[ROW][COL] = 
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROW][COL];

    // Addition of matrices
    printf("Addition of A and B:\n");
    addMatrices(A, B, result);
    printMatrix(result);

    // Subtraction of matrices
    printf("\nSubtraction of A and B:\n");
    subtractMatrices(A, B, result);
    printMatrix(result);

    // Multiplication of matrices
    printf("\nMultiplication of A and B:\n");
    multiplyMatrices(A, B, result);
    printMatrix(result);

}