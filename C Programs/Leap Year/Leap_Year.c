#include <stdio.h>
int main()
{
	int yr;
	printf("\n Enter Any YEAR: ");
	scanf("%d", &yr);
	if ((yr % 400 == 0) || (yr % 100 != 0 && yr % 4 == 0))
		printf("\n %d is a LEAP YEAR...", yr);
	else
		printf("\n %d is not a LEAP YEAR...", yr);
}
