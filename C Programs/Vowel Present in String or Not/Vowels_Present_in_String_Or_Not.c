#include <stdio.h>
int main()
{
    char a[50];
    int count = 0, i = 0;
    puts("\n Enter a Sentence: ");
    gets(a);
    while (a[i] != '\0')
    {
        switch (a[i])

        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
        }
        i++;
    }
    if (count == 1)
        printf("\n One Vowel is present in the String\n\n");
    else
        printf("\n%d Vowels are present in the String", count);
}
