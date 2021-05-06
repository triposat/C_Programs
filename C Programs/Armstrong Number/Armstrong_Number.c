#include <stdio.h>
int main()
{

    int num, copy, sum = 0, d, count = 0;
    printf("\n Enter a Number: ");
    scanf("\n%d", &num);
    copy = num;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    copy = num;
    while (num != 0)
    {
        d = num % 10;
        sum = sum + pow(d, count);
        num = num / 10;
    }
    if (sum == copy)
        printf("\nARMSTRONG NUMBER");
    else
        printf("\n Not an ARMSTRONG NUMBER");
}
