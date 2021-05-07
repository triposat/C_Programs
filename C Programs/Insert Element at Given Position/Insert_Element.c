#include <stdio.h>
int main()
{
    int a[100], pos, i, n, val;
    printf("\n Enter the No. of Element: ");
    scanf("%d", &n);
    printf("\n Enter %d Elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter the position where you wish to Insert element: ");
    scanf("%d", &pos);
    printf("\n Enter the Value: ");
    scanf("%d", &val);
    for (i = n; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = val;
    printf("\n Resultant Array: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}
