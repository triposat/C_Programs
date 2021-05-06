#include <stdio.h>
int main()
{

	int num, copy, sum = 0, d, count = 0;
	printf("\n Enter Any Number: ");
	scanf("\n%d", &num);
	copy = num;
	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	printf("\n No. of DIgits Are: %d", count);
	copy = num;
	while (num != 0)
	{
		d = num % 10;
		sum = sum + pow(d, count);
		num = num / 10;
	}
	if (sum == copy)
		printf("\n It is an ARMSTRONG NUMBER");
	else
		printf("\n It is not an ARMSTRONG NUMBER");
}
