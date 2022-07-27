#include <stdio.h>

void addition(long int a, long int b)
{
    printf("Sum of these two numbers: %ld\n", a + b);
}
void subtraction(long int a, long int b)
{
    printf("Difference between these two numbers: %ld\n", a - b);
}

int main()
{
    printf("\nEnter first number :");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter second number :");
    scanf("%ld", &r);
    printf("Enter choice of operation needed:\n 1. Add \t 2. Subtract \n");
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
    else
    {
        printf("Wrong Selection! \n");
    }
}