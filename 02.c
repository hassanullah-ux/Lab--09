#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr;

    ptr = arr;

    printf("Enter 10 integer elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\n-----------------------------------------------\n");
    printf("Element Details:\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Element %d: Address = %p, Value = %d\n",
               i + 1, (void *)(ptr + i), *(ptr + i));
    }

    printf("\n-----------------------------------------------\n");
    printf("Address and Value Differences:\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < 9; i++)
    {
        long addrDiff = (char *)(ptr + i + 1) - (char *)(ptr + i);
        int valueDiff = *(ptr + i + 1) - *(ptr + i);

        printf("Between Element %d and %d:\n", i + 1, i + 2);
        printf("  Address Difference: %ld bytes\n", addrDiff);
        printf("  Value Difference: %d\n\n", valueDiff);
    }

    return 0;
}