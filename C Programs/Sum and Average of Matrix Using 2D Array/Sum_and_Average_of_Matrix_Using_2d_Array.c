#include <stdio.h>
int main()
{
    int i, j, a[20][20], m, n, sum = 0;
    printf("\n Enter the Order of Matrix: ");
    scanf("%d%d", &m, &n);
    printf("-----------------------------------------------\n");
    printf("\n Enter the Matrix of Order %d X %d: \n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\n Enter Element [%d , %d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }
    printf("\n______________________________________________\n");
    printf("\n Sum of Matrix is: %d", sum);
    printf("\n Average of Matrix is: %.2f", (float)(sum) / (m * n));
}
