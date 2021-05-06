#include <stdio.h>
int main()
{
	int a[20][20], b[20][20], c[10][10] = {0}, r1, c1, r2, c2, i, k, j;
	printf("\n Enter The Order First Matrix: \n");
	scanf("%d%d", &r1, &c1);
	printf("\n Enter The order of Second Matrix: ");
	scanf("%d%d", &r2, &c2);
	if (c1 == r2)
	{
		printf("\n Enter The First Matrix of order [%d X %d]: \n", r1, c1);
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf(" Enter Element [%d , %d]:  ", i + 1, j + 1);
				scanf("%d", &a[i][j]);
			}
		}
		printf("\n Enter The Second  Matrix of order [%d , %d]: \n", r2, c2);
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf(" Enter Element [%d , %d]:  ", i + 1, j + 1);
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				for (k = 0; k < c1; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
		printf("\n Resultant Matrix After Multiplication is:  \n\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("\n Error!, Because %d and %d must be EQUAL", c1, r2);
}
