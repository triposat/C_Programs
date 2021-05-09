#include <stdio.h>
int main()
{
    int num, sum = 0, fact = 1, d, i, copy;
    printf("\nEnter a Number: ");
    scanf("%d", &num);
    copy = num;
    while (num != 0)
    {
        d = num % 10;
        for (i = 1, fact = 1; i <= d; i++) //factorial of digit
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }
    if (sum == copy)
        printf("\n %d is a Strong Number", copy);
    else
        printf("%d is not a Strong Number", copy);
    return 0;
}
