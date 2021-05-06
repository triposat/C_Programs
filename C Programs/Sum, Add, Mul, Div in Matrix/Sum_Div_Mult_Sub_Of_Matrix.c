#include <stdio.h>
int main()
{
	int i, j, a[20][20], m, n, b[20][20], c[40][40], d[40][40];
	float e[40][40];
	printf("\n Enter The Order of Matrix: ");
	scanf("%d%d", &m, &n);
	printf("------------------------------------------");
	printf("\n Enter The First  Matrix of Order %d X %d: \n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\n Enter Element [%d , %d]: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("-----------------------------------------------");
	printf("\n Enter The Second  Matrix of Order %d X %d: \n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\n Enter Element [%d , %d]: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			d[i][j] = a[i][j] * b[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			e[i][j] = (float)a[i][j] / b[i][j];
		}
	}
	printf("==========================================================");
	printf("\n Resultant Matrix After Addition is: \n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------------");
	printf("\n Resultant Matrix After Multiplication is: \n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------------");
	printf("\n Resultant Matrix After Division is: \n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%0.2f ", e[i][j]);
		}
		printf("\n");
	}
}
