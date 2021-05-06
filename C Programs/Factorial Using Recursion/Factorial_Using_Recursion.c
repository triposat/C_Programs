#include <stdio.h>
int factorial(int n, int f)
{
	if (n == 0)
		return f;
	else
		return factorial(n - 1, n * f);
}
int main(satyam)
{
	int n;
	printf("\n Enter Any Number: ");
	scanf("%d", &n);
	printf("\n factorial of %d is: %d", n, factorial(n, 1));
}
