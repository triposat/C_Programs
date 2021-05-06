#include <stdio.h>
void str_rev(char a[])
{
	int i, j;
	char temp;
	//find length....
	j = 0;
	while (a[j] != '\0')
	{
		j++;
	}
	j--;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	char a[50];
	puts("\n Enter Any Sentence: ");
	gets(a);
	str_rev(a);
	printf("\n Reverse of The Sentence is: %s", a);
}