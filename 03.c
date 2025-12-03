#include <stdio.h>

void printArray(int (*ptr)[3], int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}

void swapRows(int (*ptr)[3], int rows)
{
    int temp;
    int *firstRow = *(ptr + 0);        
    int *lastRow = *(ptr + (rows - 1)); 

    
    for (int j = 0; j < 3; j++)
    {
        temp = *(firstRow + j);
        *(firstRow + j) = *(lastRow + j);
        *(lastRow + j) = temp;
    }
}

int main()
{
    int arr[2][3];
    int (*ptr)[3]; 

    ptr = arr;

    printf("Enter elements for a 2x3 array:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter 3 elements for row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(ptr + i) + j));
        }
    }

    printf("\n----------------------------------------------");
    printf("\nArray BEFORE swapping first and last rows:");
    printf("\n----------------------------------------------");
    printArray(ptr, 2);

    swapRows(ptr, 2);


    printf("\n----------------------------------------------");
    printf("\nArray AFTER swapping first and last rows:");
    printf("\n----------------------------------------------");
    printArray(ptr, 2);
    printf("\n");

    return 0;
}