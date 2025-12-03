#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
    return a / b;
}

int main()
{
    float num1, num2;
    char op;

    float (*operations[4])(float, float) = {add, subtract, multiply, divide};
    char operators[4] = {'+', '-', '*', '/'};

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%f", &num2);

    int found = 0;
    for (int i = 0; i < 4; i++)
    {
        if (op == operators[i])
        {
            float result = operations[i](num1, num2);
            printf("Result: %.2f\n", result);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Invalid operator.\n");
    }

    return 0;
}
