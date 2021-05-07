#include <stdio.h>

int floyds(int n)
{
    int i, j, count = 0, r;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", ++count);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\n Enter Number of Terms: ");
    scanf("%d", &n);
    floyds(n);
}
