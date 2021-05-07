#include <stdio.h>
int factorial(int n, int f)
{
    if (n == 0)
        return f;
    else
        return factorial(n - 1, n * f);
}
int main()
{
    int n;
    printf("\n Enter a Number: ");
    scanf("%d", &n);
    printf("\n %d! = %d", n, factorial(n, 1));
}
