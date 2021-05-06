#include <stdio.h>
int main()
{
	int num, fact = 1, i;
	char choice;
	do
	{
		fact = 1;
		printf("\n Enter a Number: ");
		scanf("%d", &num);
		for (i = 1; i <= num; i++)
		{
			fact = fact * i;
		}
		printf("\n Factorial of %d is: %d", num, fact);
		printf("\n\n To Continuous press y: ");
		choice = getch();
	} while (choice == 'y' || choice == 'Y');
	return 0;
}
