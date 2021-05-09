#include <stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    int i, j, count = 0;
    printf("\n Enter a String: ");
    gets(s1);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != ' ')
        {

            s2[j] = s1[i];
            count++;
            j++;
        }
        i++;
    }
    printf("\n String after Removing all the Spaces is: %s", s2);
}
