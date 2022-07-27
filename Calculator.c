#include <stdio.h>

void addition(long int a, long int b)
{
    printf("\nSum of these two numbers is : %ld\n", a + b);
}

int main()
{
    printf("\nEnter first number : ");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter second number : ");
    scanf("%ld", &r);
    addition(t, r);
}