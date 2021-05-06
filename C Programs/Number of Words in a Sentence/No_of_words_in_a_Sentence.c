#include <stdio.h>
int main()
{
	char name[50];
	int i, count = 0;
	puts("\n Enter Any Sentence: ");
	gets(name);
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ' ' && name[i + 1] != ' ')
			count++;
	}
	printf(" No. of words in a sentence are: %d", count + 1);
}
