#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("\n Enter Three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("\n Largest No. among three is: %d", max);
}
