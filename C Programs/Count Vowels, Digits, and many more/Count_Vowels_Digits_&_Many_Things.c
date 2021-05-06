#include <stdio.h>
int main()
{
	char text[100];
	int i, vowel = 0, digit = 0, conso = 0, special = 0, space = 0;
	fflush(stdin);
	printf("\nPlease Enter The Text: \n");
	gets(text);
	for (i = 0; text[i] != '\0'; i++)
	{
		if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
		{
			if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
			{
				vowel++;
			}

			else
			{
				conso++;
			}
		}
		else if (text[i] >= '0' && text[i] <= '9')
		{
			digit++;
		}
		else if (text[i] == ' ')
			space++;
		else
		{
			special++;
		}
	}
	printf("\n The Text Contain....");
	printf("\n*************************************");
	printf("\n No. of Words in the Text is: %d", space + 1);
	printf("\n\n No. of Vowels in the Text is: %d", vowel);
	printf("\n\n No. of Consonants in the Text is: %d", conso);
	printf("\n\n No. of Digits in the Text is: %d", digit);
	printf("\n\n No. of Special Symbols in the Text is: %d", special);
	printf("\n\n No. of Space in the Text is: %d", space);
	printf("\n************************************\n");
}
