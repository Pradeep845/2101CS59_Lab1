#include <stdio.h>

void addition(long int a, long int b)
{
    printf("Sum of these two numbers: %ld\n", a + b);
}
void subtraction(long int a, long int b)
{
    printf("Difference between these two numbers: %ld\n", a - b);
}
void multiplication(long int a, long int b)
{
    printf("Product of these two numbers: %ld\n", a * b);
}

void division(long int a, long int b)
{
    if (b != 0)
    {
        if (a % b != 0)
        {
            float c = a / (float)b;
            printf("Division of these two number: %f\n", c);
        }
        else
        {
            printf("Division of these two number: %ld\n", a / b);
        }
    }
    else
    {
        printf("division by 0 ERROR");
    }
}

int main()
{
    printf("\nEnter first number :");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter second number :");
    scanf("%ld", &r);
    printf("Enter choice of operation needed:\n1. Add\t2. Subtract\t3. Multiplication\t4. Division\n ");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        addition(t, r);
    }
    else if (n == 2)
    {
        subtraction(t, r);
    }
    else if (n == 3)
    {
        multiplication(t, r);
    }
    else if (n == 4)
    {
        division(t, r);
    }
    else
    {
        printf("Wrong Selection! \n");
    }
}
