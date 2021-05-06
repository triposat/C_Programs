#include <stdio.h>
int main()
{
	int i, j, s1 = 0, s2 = 0, s3 = 0, s4 = 0, order, a[10][10], b[10][10], c[10][10], d[10][10], e[10][10];
	printf("\n Enter The Order of Matrix: \n");
	scanf("%d", &order);
	printf("\n Enter The Elements of  Matrix of Order %d X %d : \n", order, order);
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------------");

	printf("\n Principal Diagonal Elements Are :\n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			if (i == j)
			{
				c[i][j] = a[i][j];
			}
			else
				c[i][j] = 0;
		}
	}
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			printf("%d  ", c[i][j]);
			s1 = s1 + c[i][j];
		}
		printf("\n");
	}
	printf("\n Sum of Principal Diagonal Elements is: %d\n\n", s1);
	printf("----------------------------------------------\n");
	printf("\n Non-Principal Diagonal Elements are: \n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			if (i + j == order - 1)
			{
				d[i][j] = a[i][j];
			}
			else
				d[i][j] = 0;
		}
	}
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{

			printf("%d  ", d[i][j]);
			s2 = s2 + d[i][j];
		}
		printf("\n");
	}
	printf("\n Sum of Non-Principal Diagonal Elements is: %d\n\n", s2);
	printf("----------------------------------------------\n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			if (i < j)
			{
				b[i][j] = a[i][j];
			}
			else
				b[i][j] = 0;
		}
	}
	printf("\n Upper Triangular Matrix is: \n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			printf("%d  ", b[i][j]);
			s3 = s3 + b[i][j];
		}
		printf("\n");
	}
	printf("\n Sum of Upper Triangular Matrix is: %d ", s3);
	printf("\n----------------------------------------------\n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			if (i > j)
			{
				e[i][j] = a[i][j];
			}
			else
				e[i][j] = 0;
		}
	}
	printf("\n Lower Triangular Matrix is: \n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			printf("%d  ", e[i][j]);
			s4 = s4 + e[i][j];
		}
		printf("\n");
	}
	printf("\n Sum of Lower Triangular Matrix is: %d ", s4);
}
