#include <stdio.h>
int main()
{
	int a[50], b[50], k[50];
	int i, j, count, n, l = 0;
	printf("\n How Many Elements You Want to \"INPUT\": ");
	scanf("%d", &n);
	printf("\n Enter %d Elements: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = -1;
	}

	for (i = 0; i < n; i++)
	{

		count = 1;
		for (j = i + 1; j < n; j++)
		{

			if (a[i] == a[j])
			{
				//k[i]=j+1;
				count++;
				b[j] = 0;
			}
		}

		if (b[i] != 0)
			b[i] = count;
	}

	for (i = 0; i < n; i++)
	{
		if (b[i] != 0)
		{

			printf("\n\n %d occurs: %d Times", a[i], b[i]);
			//printf("\n\n %d Again repeated at position : %d",a[i],k[i]);
		}
	}
}
