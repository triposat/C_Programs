#include <stdio.h>
int factorial(int n)
{
	int i;
	int fact = 1;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int NCR(int n, int r)
{
	int c;
	c = factorial(n) / (factorial(r) * factorial(n - r));
	return c;
}
int main(satyam)
{
	int i, j, k, n;
	printf("\n Enter Number of rows: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d  ", NCR(i, j));
		}
		printf("\n");
	}
}
