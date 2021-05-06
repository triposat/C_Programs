#include <stdio.h>
int main(satyamtripathi)
{
	int a, b, c;
	char ch;
	printf("\nEnter Values: ");
	scanf("%d%c%d", &a, &ch, &b);

	switch (ch)
	{
	case '+':
		printf("\n%d", a + b);
		break;
	case '-':
		c = a - b;
		printf("\n%d", c);
		break;
	case '*':
		c = a * b;
		printf("\n%d", c);
		break;
	case '%':
		c = a % b;
		printf("\n%d", c);
		break;
	case '/':
		c = a / b;
		printf("\n%d", c);
		break;
	}
}
