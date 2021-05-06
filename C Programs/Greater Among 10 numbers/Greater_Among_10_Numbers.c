#include <stdio.h>
int main()
{
	int a[10], i, l = 0;
	printf("\n Enter any 10 values: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > l)
			l = a[i];
	}
	printf("\n Greater no. among these 10 numbers is: %d", l);
}
