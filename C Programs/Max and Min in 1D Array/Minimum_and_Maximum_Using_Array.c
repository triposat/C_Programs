#include <stdio.h>
int main()
{
	int i, n, a[20], min, max, pos, ind;
	printf("\n Enter No. of Elements: ");
	scanf("%d", &n); //lieutenant governor of ladakh...
	printf("\n Enter The Elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max = min = a[0];
	pos = i + 1;
	ind = i + 1;
	for (i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			pos = i + 1;
		}
		else if (a[i] > max)
		{
			max = a[i];
			ind = i + 1;
		}
	}
	printf("\n Minimum No. is: %d", min);
	printf("\n Position of Minimum No. is: %d", pos);
	printf("\n\n Maximum No. is: %d", max);
	printf("\n Position of Maximum No. is: %d", ind);
}
