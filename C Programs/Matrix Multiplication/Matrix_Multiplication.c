#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], c[20][20];
    int i, j, k, r1, r2, c1, c2;
    printf("\n Enter the Order of First Matrix: \n");
    scanf("%d%d", &r1, &c1);
    printf("\n Enter the Matrix of Order %d X %d: \n", r1, c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter the Order of Second Matrix: \n");
    scanf("%d%d", &r2, &c2);
    printf("\n Enter the Matrix of Order %d X %d: \n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("\n Resultant Matrix after Multiplication: \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d  ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\n Error!");
}
