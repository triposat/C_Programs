#include <stdio.h>
double factorial(int n)
{
	int i = 1;
	double fact = 1.0;
	for (i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}
int main()
{
	int n, r;
	double ncr;
	printf("\n Enter the value of n and r: ");
	scanf("\n%d%d", &n, &r);
	ncr = factorial(n) / factorial(r) * factorial(n - r);
	printf("\n value of NCR is: %lf", ncr);
}
