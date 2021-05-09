#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, j;
    printf("\n Enter a String: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            for (j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("\n String after removing all the Consonants: %s", str);
    return 0;
}
