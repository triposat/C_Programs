#include <stdio.h>
int main()
{
	int sum = 0, i, num;

	printf("\n Enter Any Number: ");
	scanf("\n%d", &num);
	for (i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == num)
		printf("\n %d is a PERFECT NUMBER", num);
	else
		printf("\n %d is not a PERFECT NUMBER\n\n", num);
}
