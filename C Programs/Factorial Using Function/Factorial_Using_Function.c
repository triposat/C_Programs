#include <stdio.h>
int factorial(int n)
{
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("\n Please Enter a Number: ");
    scanf("%d", &n);
    printf("\n %d! = %d", n, factorial(n));
}
