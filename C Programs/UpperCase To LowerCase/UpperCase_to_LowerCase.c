#include <stdio.h>
int main()
{
	char uc, lc;
	int y = lc;
	printf("Enter The Upper Case Letter: ");
	scanf("%c", &uc);
	lc = uc + 32;
	printf("\nThe Character in Lower Case: %c", lc);
	printf("\nThe ASCII value is: %d", lc);
}
