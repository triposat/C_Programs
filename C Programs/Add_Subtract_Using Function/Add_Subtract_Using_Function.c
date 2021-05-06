#include <stdio.h>
int Add(int a, int b)
{
	int s;
	s = a + b;
	return a + b;
}
int Sub(int a, int b)
{
	int s;
	s = a - b;
	return s;
}
int main()
{
	int a, b;
	printf("\nPlease Enter Two No: ");
	scanf("%d%d", &a, &b);
	printf("\nSum of No. Are: %d", Add(a, b));
	printf("\nDiff. of No. Are: %d", Sub(a, b));
	return 0;
}
