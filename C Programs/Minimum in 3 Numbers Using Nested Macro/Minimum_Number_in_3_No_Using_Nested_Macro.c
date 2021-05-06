#include <stdio.h>
#define min2(a, b) (a < b ? a : b)
#define min3(a, b, c) (min2(a, b) < c ? min2(a, b) : c)
int main()
{
	int a, b, c;
	printf("\n Enter The Values of a,b,c: \n");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n Minimum No. Among %d ,%d ,%d will be : %d", a, b, c, min3(a, b, c));
}
