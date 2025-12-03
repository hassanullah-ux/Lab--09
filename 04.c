#include <stdio.h>

void printValue(void *ptr, char type)
{
    if (type == 'i')
    {
        printf("Integer: %d\n", *(int *)ptr);
    }
    else if (type == 'f')
    {
        printf("Float: %.2f\n", *(float *)ptr);
    }
    else if (type == 'c')
    {
        printf("Character: %c\n", *(char *)ptr);
    }
    else
    {
        printf("Invalid type.\n");
    }
}

int main()
{
    int i;
    float f;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c); 

    printf("\n--- Output ---\n");
    printValue(&i, 'i');
    printValue(&f, 'f');
    printValue(&c, 'c');

    return 0;
}
