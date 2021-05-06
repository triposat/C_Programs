#include <stdio.h>
int Add(int a, int b)
{
    int s;
    s = a + b;
    return a + b;
}
int Sub(int a, int b)
{
    int s;
    s = a - b;
    return s;
}
int main()
{
    int a, b;
    printf("\nPlease Enter Two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nSum of numbers are: %d", Add(a, b));
    printf("\nDifference  of numbers are: %d", Sub(a, b));
    return 0;
}
