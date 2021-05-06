#include <stdio.h>
float factorial(float n)
{
	float i;
	float fact = 1.0;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int n;
	printf("\n Please Enter Any Number: ");
	scanf("%d", &n);
	printf("\n Factorial of %d is: %f", n, factorial(n));
}
