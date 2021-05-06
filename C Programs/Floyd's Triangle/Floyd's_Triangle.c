#include <stdio.h>
int main()
{
	int i, j, count = 0, n, x;
	printf("\n Enter Number Of Rows: ");
	scanf("\n%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", ++count);
		}
		printf("\n");
	}
	for (i = n; i >= 1; i--)
	{
		x = i;
		for (j = 1; j <= i; j++)
		{
			printf("%d", x++);
		}
		printf("\n");
	}
}
