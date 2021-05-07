#include <stdio.h>
int main()
{
    int i, j, n, k, x;
    printf("\n Enter Number of Rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        x = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d", x++);
        }
        printf("\n");
    }
}
