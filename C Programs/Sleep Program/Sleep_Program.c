#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    int i;
    char str[100];
    printf("\n Enter a Sentence: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        sleep(1);
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
            printf("\b%c", str[i]);
            sleep(0.90);
        }
    }
}
