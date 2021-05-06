#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], rev[100];
	puts("\n Enter The String: ");
	gets(a);
	strcpy(rev, a);
	rev == strrev(a);
	if (strcmp(a, rev) == 0)
		printf("\n Palindrome");
	else
		printf("\n Not Palindrome");
}
