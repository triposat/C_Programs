#include <stdio.h>
#include <string.h>
int main()
{
	char a[50], b[50];
	puts("\n Enter The String: ");
	gets(a);
	puts("\n Enter The String: ");
	gets(b);
	printf("\n String After Concatenation: %s", strcat(a, b));
}
