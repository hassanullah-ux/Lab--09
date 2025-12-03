#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max)
{
    *min = *arr;
    *max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
    }
}

int analyze(int *arr, int size, int *min, int *max)
{
    int sum = 0;

    findMinMax(arr, size, min, max);

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    int arr[5];
    int min, max, sum;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = analyze(arr, 5, &min, &max);

    printf("\n-------------------------------------\n");
    printf("Results:\n");
    printf("-------------------------------------\n");
    printf("Sum of all elements: %d\n", sum);
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("-------------------------------------\n");

    return 0;
}