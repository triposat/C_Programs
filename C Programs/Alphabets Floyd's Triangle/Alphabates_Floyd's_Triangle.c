#include <stdio.h>
int main()
{
    int i, j, n;
    printf("\n Enter any Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 65 + (i + j) % 2);
        }
        printf("\n");
    }
}
