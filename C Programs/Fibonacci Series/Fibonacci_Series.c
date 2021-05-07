#include <stdio.h>
int main()
{
    char ch;
    int i, a = 0, b = 1, next, n, sum = 0, count = 0;
    do
    {
        printf("\nEnter Number of Terms: \n");
        scanf("%d", &n);
        printf("\n Fibonacci Series: ");
        printf("%d %d", a, b);
        for (i = 1; i <= n - 2; i++)
        {
            next = a + b;
            count++;
            printf(" %d", next);
            a = b;
            b = next;
            sum = sum + next;
        }
        printf("\n Sum of No. are: %d", sum + 1);
        printf("\nDo you want to Continue: Press[y/n]");
        ch = getch();
    } while (ch == 'y');
}
