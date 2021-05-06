#include <stdio.h>
#include <string.h>
int main()
{
	char a[50];
	char b[50];
	int i, j;
	puts("Enter Any Sentence: ");
	gets(a);
	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (i >= 0)
	{
		b[j] = a[i];
		i--;
		j++;
	}
	b[j] = '\0';
	printf("\n Sentence in Reverse Order is: ");
	puts(b);
}
