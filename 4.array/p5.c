
// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

void main() 
{
    int n1, n2, choice, i, j, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    printf("Sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        for (i = 0; i < n1 - 1; i++) 
        {
            for (j = i + 1; j < n1; j++) 
            {
                if (arr1[i] > arr1[j]) 
                {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        for (i = 0; i < n2 - 1; i++) 
        {
            for (j = i + 1; j < n2; j++) 
            {
                if (arr2[i] > arr2[j]) 
                {
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } else if (choice == 2) 
    {
        for (i = 0; i < n1 - 1; i++) 
        {
            for (j = i + 1; j < n1; j++) 
            {
                if (arr1[i] < arr1[j]) 
                {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        for (i = 0; i < n2 - 1; i++) 
        {
            for (j = i + 1; j < n2; j++) 
            {
                if (arr2[i] < arr2[j]) 
                {
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } else 
    {
        printf("Invalid choice.\n");
        return 0;
    }

    printf("Sorted first array: ");
    for (i = 0; i < n1; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Sorted second array: ");
    for (i = 0; i < n2; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

}
