#include <stdio.h>
#include <math.h>
int main(satyam)
{
	int a, b, num, copy, sum, count, d;
	printf("\nEnter The Range: \n");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("Please Enter the 1st No. smaller than 2nd No.: ");
	else
	{
		for (num = a; num <= b; num++)
		{

			count = 0;
			sum = 0;
			copy = num;
			while (copy != 0)
			{
				copy = copy / 10;
				count++;
			}
			copy = num;
			while (copy != 0)
			{
				d = copy % 10;
				sum = sum + pow(d, count);
				copy = copy / 10;
			}
			if (sum == num)
				printf("\n%d", sum);
		}
	}
}
