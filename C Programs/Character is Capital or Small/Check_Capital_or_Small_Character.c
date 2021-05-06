#include <stdio.h>
int main()
{
	int y;
	char ch = y;

	printf("Enter Any Number: ");

	scanf("%d", &y);
	{
		printf("\n CHARACTER is: %c", y);
	}
	if ((y > 64) && (y < 91))
	{
		printf(" \n %c is a CAPITAL LETTER", y);
	}
	else if ((y > 97) && (y <= 123))
	{
		printf("\n %c is a SMALL LETTER", y);
	}
	else
	{
		printf("\n It is a number");
	}
}
