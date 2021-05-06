//Number of occurence of a particular character.........
#include <stdio.h>
int main()
{
	char a[50], ch;
	int i = 0, count = 0;
	puts("\n Enter Any Sentence: ");
	gets(a);
	printf("Enter the Character you want to Search: ");
	scanf("%c", &ch);
	while (a[i] != '\0')
	{
		if (a[i] == ch)
			count++;
		i++;
	}
	printf("The Charcter %c Occured %d times", ch, count);
}
