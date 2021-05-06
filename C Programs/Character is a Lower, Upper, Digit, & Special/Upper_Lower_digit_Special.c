#include <stdio.h>
int main()
{
	char ch;
	printf("\n Enter Any Character: ");
	scanf("%c", &ch);
	if ((ch >= 'a' && ch <= 'z'))
	{
		printf("\n %c is a LOWER CASE CHARECTER: ", ch);
		printf("\n ASCII value of entered character is: %d", ch);
	}
	else if ((ch >= 'A' && ch <= 'Z'))
	{
		printf("\n %c is a UPPER CASE CHARECTER: ", ch);
		printf("\n ASCII value of entered character is: %d", ch);
	}
	else if ((ch >= '0' && ch <= '9'))
	{
		printf("\n %c is a digit...", ch);
		printf("\n ASCII value of entered character is: %d", ch);
	}
	else
	{
		printf("\n Special symbol...");
		printf("\n ASCII value of entered character is: %d", ch);
	}
}
