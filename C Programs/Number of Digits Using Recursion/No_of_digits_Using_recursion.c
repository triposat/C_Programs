#include <stdio.h>
int count_digits(int n)
{
	static int i;
	if (n == 0)
	{
		return i;
	}
	else
		i++;
	return count_digits(n / 10);
}
int main()
{
	int n, count;
	printf("\n Enter Any Number: ");
	scanf("%d", &n);
	count = count_digits(n);
	printf(" Number of Digits in %d is: %d", n, count);
	return 0;
}
