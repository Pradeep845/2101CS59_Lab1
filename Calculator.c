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

int main()
{
    printf("\nEnter first number :");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter second number :");
    scanf("%ld", &r);
    printf("Enter choice of operation needed:\n1. Add\t2. Subtract\t3. Multiplication\n ");
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
    else
    {
        printf("Wrong Selection! \n");
    }
}
