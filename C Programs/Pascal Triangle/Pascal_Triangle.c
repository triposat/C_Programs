#include <stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int NCR(int n, int r)
{
    int c;
    c = factorial(n) / (factorial(r) * factorial(n - r));
    return c;
}
int main()
{
    int n, i, j, k;
    printf("\n Please Enter the number of Rows: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (k = 0; k < (n - i); k++)

        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", NCR(i, j));
        }
        printf("\n");
    }
}
