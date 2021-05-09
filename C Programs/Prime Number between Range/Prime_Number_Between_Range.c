#include <stdio.h>
int main()
{
    int a, b, i, num, count;
    printf("Enter the Range: ");
    scanf("%d%d", &a, &b);
    printf("\nPrime No. between %d and %d are: ", a, b);
    for (num = a; num <= b; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 & num != 1)
            printf("\n%d", num);
    }
}
