#include <stdio.h>
int main()
{
	int i, j, a[20][20], sum = 0, order;
	printf("\n Enter The Order of Matrix: ");
	scanf("%d ", &order);
	printf("==========================================================");
	printf("\n Enter The  elements: \n");
	for (i = 0; i < order; i++)
	{
		for (j = 0; j < order; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < order; i++)
	{
		sum = sum + a[i][i];
	}
	printf("%d", sum);
}
