#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n + sum(n - 1);
}
int main()
{
    int n, count;
    printf("\n Enter number of Digits: ");
    scanf("%d", &n);
    count = sum(n);
    printf("\n Sum of numbers upto %d is: %d", n, count);
    return 0;
}
