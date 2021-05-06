#include <stdio.h>
int table(int n, int i)
{
	if (i > 10)
	{
		return 0;
	}
	else
	{
		return table(n, i + 1);
	}
}
int main()
{
	int n, i = 1;
	printf("\n Entee the Number: ");
	scanf("%d", &n);
	table(n, i);
}
