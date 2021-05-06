#include <stdio.h>
int main()
{
    char text[100];
    int i, vowel = 0, digit = 0, conso = 0, special = 0, space = 0;
    fflush(stdin);
    printf("\nPlease Enter the Text: ");
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
    printf("\n The Text Contains: \n");
    printf("\n No. of Words in the Text is: %d", space + 1);
    printf("\n No. of Vowels in the Text is: %d", vowel);
    printf("\n No. of Consonants in the Text is: %d", conso);
    printf("\n No. of Digits in the Text is: %d", digit);
    printf("\n No. of Special Symbols in the Text is: %d", special);
    printf("\n No. of Space in the Text is: %d", space);
}
