#include <stdio.h>
int main()
{
	int a[100], pos, i, n;
	printf("\n Enter the No. of Element: ");
	scanf("%d", &n);
	printf("\n Enter %d Elements: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter The position where You wish To DELETE element: ");
	scanf("%d", &pos);
	if (pos > n)
		printf("\n Deletion not posiible: ");
	else
	{
		for (i = pos - 1; i <= n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		printf("\n Resultant Array: ");
		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", a[i]);
		}
	}
}
