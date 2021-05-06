// WAP TO MERGE TWO SORTED ARRAY TO THIRD SORTED ARRAY
#include <stdio.h>
int main()
{
	int i, j, k, n1, n2, a[50], b[50], c[100];
	printf("\n Enter The Size of First Array: ");
	scanf("%d", &n1);
	printf("\n Enter The %d Elements: \n", n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("\n Enter The Size of Second Array: ");
	scanf("%d", &n2);
	printf("\n Enter The %d Elements: \n", n2);
	for (j = 0; j < n2; j++)
	{
		scanf("%d", &b[j]);
	}
	i = 0;
	j = 0;
	k = 0;
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = b[j];
			j++;
			k++;
		}
	}

	while (j < n2)
	{
		c[k] = b[j];
		j++;
		k++;
	}
	while (i < n1)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	printf("\n After Merging: \n\n");
	for (k = 0; k < n1 + n2; k++)
	{
		printf(" %d ", c[k]);
	}
}
