# include<stdio.h>
int prime(int n)
{
    int i, count = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && n != 1)
        printf("\n\n\n\t\a%d is a Prime Number", n);
    else
        printf("\n %d is not a Prime Number", n);
}
int main()
{
    int n;
    printf("\n Please Enter a Number: ");
    scanf("%d", &n);
    prime(n);
}
