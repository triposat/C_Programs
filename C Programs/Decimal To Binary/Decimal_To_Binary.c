#include <stdio.h>
int main()
{
    int num, rem, bin = 0, i = 0, copy;
    printf("\n\n Convert Decimal into Binary");
    printf("\n-------------------------");
    printf("\n Enter a Number:");
    scanf("%d", &num);
    copy = num;
    while (copy != 0)
    {
        rem = copy % 2;
        bin = bin + rem * pow(10, i);
        copy = copy / 2;
        i++;
    }
    printf("\n Binary of %d is: %d", num, bin);
}
